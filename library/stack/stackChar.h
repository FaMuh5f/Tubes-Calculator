// author : Nauval Ozora Mahadri

#ifndef STACK_C_H
#define STACK_C_H

#define Nil NULL
#define Info(P) (P)->info
#define Next(P) (P)->next
#define Top(S)  ((S).top)

#include<stdio.h>
#include<stdlib.h>
#include "../boolean/boolean.h"

typedef char infotypeStackC;
typedef struct tElmSC *addressStackC;
typedef struct tElmSC{
    infotypeStackC info;
    addressStackC next;
}elmStackC;
typedef struct{
    addressStackC top;
}stackC;

// Mengembalikan true jika Stack Char kosong. 
// i.s   : S terdefinisi.					  
// f.s   : S diketahui kosong atau tidaknya.  
boolean isEmptyStackC(stackC S);

// Membuat sebuah Stack Char kosong.							 
// i.s   : S belum terdefinisi.									 
// f.s   : Menghasilkan Stack Char kosong jika alokasi berhasil. 
void createStackC(stackC *S);

// Menghasilkan address hasil alokasi Stack Char.		
// i.s   : X belum dialokasikan.							
// f.s   : Menghasilkan address X yang sudah dialokasikan.	
addressStackC alokasiStackC(infotypeStackC X);

// Membebaskan address P.			
// i.s   : P sudah dialokasikan.		
// f.s   : P berhasil didealokasikan.	
void dealokasiStackC(addressStackC P);

// Melakukan push elemen ke bagian Top Stack Char.	
// i.s   : S terdefinisi.							
// f.s   : Elemen X ditambahkan ke bagian Top S.
void pushStackC(stackC *S, infotypeStackC X);
	
// Menghapus elemen dari bagian Top Stack Char.  
// i.s   : Top S tidak kosong dan X elemen S.	 
// f.s   : Elemen X dihapuskan dari Top S.	
void popStackC(stackC *S, infotypeStackC *X);
	  

#endif
