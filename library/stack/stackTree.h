// author : Nauval Ozora Mahadri

#ifndef STACK_TREE_H
#define STACK_TREE_H

#define Nil NULL
#define Info(P) (P)->info
#define Next(P) (P)->next
#define Top(S)  ((S).top)

#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include "../tree/tree.h"

typedef BinTree infotypeStackT;
typedef struct tElmST *addressStackT;
typedef struct tElmST{
    infotypeStackT info;
    addressStackT next;
}elmStackT;
typedef struct{
    addressStackT top;
}stackT;

// Mengembalikan nilai true jika Stack Tree kosong.	
// I.S   : S terdefinisi.					 	
// F.S   : S diketahui apakah kosong atau tidak 	
boolean isEmptyStackT(stackT S);

// Membuat sebuah Stack Tree kosong.								
// I.S   : S belum terdefinisi.										
// F.S   : Menghasilkan Stack Tree kosong jika alokasi berhasil.	
void createStackT(stackT *S);

// Menghasilkan address hasil alokasi Stack Tree.		 
// I.S   : X belum dialokasikan.							 
// F.S   : Menghasilkan address X yang sudah dialokasikan.
addressStackT alokasiStackT(infotypeStackT X);
	 
// Membebaskan address P.			
// I.S   : P sudah dialokasikan.		
// F.S   : P berhasil didealokasi.
void dealokasiStackT(addressStackT P);
	
// Melakukan push elemen ke bagian Top Stack Tree.
// I.S   : S terdefinisi.							
// F.S   : Elemen X ditambahkan ke bagian Top S.
void pushStackT(stackT *S, infotypeStackT X);
	
// Menghapus elemen dari bagian Top Stack Tree.	 
//I.S   : Top S tidak kosong dan X elemen S.	 
// F.S   : Elemen X dihapuskan dari Top S.
void popStackT(stackT *S, infotypeStackT *X);
		 
#endif
