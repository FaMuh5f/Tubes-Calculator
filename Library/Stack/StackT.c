#include "stackTree.h"

boolean isEmptyStackT(stackT S) {
    return (Top(S)==Nil);
}

void createStackT(stackT *S) {
    Top(*S)=Nil;
}

addressStackT alokasiStackT(infotypeStackT X) {
    addressStackT P;
    
    P=(addressStackT)malloc(sizeof(elmStackT));
    if(P!=Nil) {
        Info(P)=X;
        Next(P)=Nil;
    }
    return P;
}

void dealokasiStackT(addressStackT P) {
    free(P);
}

void pushStackT(stackT *S, infotypeStackT X) {
    addressStackT P;
    
    P=alokasiStackT(X);
    Next(P)=Top(*S);
    Top(*S)=P;
}

void popStackT(stackT *S, infotypeStackT *X) {
    addressStackT P;
    
    if(!isEmptyStackT(*S)) {
        P=Top(*S);
        Top(*S)=Next(P);
        *X=Info(P);
        dealokasiStackT(P);
    }
	else {
        printf("\nStackChar kosong!\n");
    }
}
