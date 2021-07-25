// Author: M. RIZKY MAULIDHAN & SHINTA NURKAAFI

#include "stackChar.h"

boolean isEmptyStackC(stackC S) {
    return (Top(S)==Nil);
}

void createStackC(stackC *S) {
    Top(*S)=Nil;
}

addressStackC alokasiStackC(infotypeStackC X) {
    addressStackC P;
    
    P=(addressStackC)malloc(sizeof(elmStackC));
    if(P!=Nil) {
        Info(P)=X;
        Next(P)=Nil;
    }
    return P;
}

void dealokasiStackC(addressStackC P) {
    free(P);
}

void pushStackC(stackC *S, infotypeStackC X) {
    addressStackC P;
    
    P=alokasiStackC(X);
    Next(P)=Top(*S);
    Top(*S)=P;
}

void popStackC(stackC *S, infotypeStackC *X) {
    addressStackC P;
    
    if(!isEmptyStackC(*S)) {
        P=Top(*S);
        Top(*S)=Next(P);
        *X=Info(P);
        dealokasiStackC(P);
    }
	else {
        printf("\nStackChar kosong!\n");
    }
}
