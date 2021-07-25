#include "stackTree.h"

// Mengembalikan nilai true jika Stack Tree kosong.	
// I.S   : S terdefinisi.					 	
// F.S   : S diketahui apakah kosong atau tidak 
boolean isEmptyStackT(stackT S) {
    return (Top(S)==Nil);
}

// Membuat sebuah Stack Tree kosong.								
// I.S   : S belum terdefinisi.										
// F.S   : Menghasilkan Stack Tree kosong jika alokasi berhasil.
void createStackT(stackT *S) {
    Top(*S)=Nil;
}

// Menghasilkan address hasil alokasi Stack Tree.		 
// I.S   : X belum dialokasikan.							 
// F.S   : Menghasilkan address X yang sudah dialokasikan.
addressStackT alokasiStackT(infotypeStackT X) {
    addressStackT P;
    
    P=(addressStackT)malloc(sizeof(elmStackT));
    if(P!=Nil) {
        Info(P)=X;
        Next(P)=Nil;
    }
    return P;
}

// Membebaskan address P.			
// I.S   : P sudah dialokasikan.		
// F.S   : P berhasil didealokasi.
void dealokasiStackT(addressStackT P) {
    free(P);
}

// Melakukan push elemen ke bagian Top Stack Tree.
// I.S   : S terdefinisi.							
// F.S   : Elemen X ditambahkan ke bagian Top S.
void pushStackT(stackT *S, infotypeStackT X) {
    addressStackT P;
    
    P=alokasiStackT(X);
    Next(P)=Top(*S);
    Top(*S)=P;
}

// Menghapus elemen dari bagian Top Stack Tree.	 
//I.S   : Top S tidak kosong dan X elemen S.	 
// F.S   : Elemen X dihapuskan dari Top S.
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