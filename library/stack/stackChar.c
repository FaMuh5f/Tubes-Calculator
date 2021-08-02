#include "stackChar.h"

// Mengembalikan true jika Stack Char kosong. 
// i.s   : S terdefinisi.					  
// f.s   : S diketahui kosong atau tidaknya.  
boolean isEmptyStackC(stackC S) {
    return (Top(S)==Nil);
}

// Membuat sebuah Stack Char kosong.							 
// i.s   : S belum terdefinisi.									 
// f.s   : Menghasilkan Stack Char kosong jika alokasi berhasil. 
void createStackC(stackC *S) {
    Top(*S)=Nil;
}

// Menghasilkan address hasil alokasi Stack Char.		
// i.s   : X belum dialokasikan.							
// f.s   : Menghasilkan address X yang sudah dialokasikan.
addressStackC alokasiStackC(infotypeStackC X) {
    addressStackC P;
    
    P=(addressStackC)malloc(sizeof(elmStackC));
    if(P!=Nil) {
        Info(P)=X;
        Next(P)=Nil;
    }
    return P;
}

// Membebaskan address P.			
// i.s   : P sudah dialokasikan.		
// f.s   : P berhasil didealokasikan.
void dealokasiStackC(addressStackC P) {
    free(P);
}

// Melakukan push elemen ke bagian Top Stack Char.	
// i.s   : S terdefinisi.							
// f.s   : Elemen X ditambahkan ke bagian Top S.
void pushStackC(stackC *S, infotypeStackC X) {
    addressStackC P;
    
    P=alokasiStackC(X);
    Next(P)=Top(*S);
    Top(*S)=P;
}

// Menghapus elemen dari bagian Top Stack Char.  
// i.s   : Top S tidak kosong dan X elemen S.	 
// f.s   : Elemen X dihapuskan dari Top S.	
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