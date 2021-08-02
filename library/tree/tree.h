/* File    		: Tree.h 	*/
/* Desk    		: Deklarasi Binary Tree secara rekursif  	*/
/* Oleh    		: ANI RAHMANI / 23501007  			*/
/* Tgl	   		: 21 / 11 / 2001	     			*/
/* Mod     		: Mohammad Rizky Maulidhan */
/* Mod 2		: Fadhil Muhammad */
/* Tgl Mod 		: 12 /07 / 2020 */
/* Tgl Mod 2	: 12 / 07 / 2021 */

#ifndef TREE_H
#define TREE_H

#define Nil NULL
#define Info(P) (P)->info
#define Left(P) (P)->left
#define Right(P) (P)->right
#define Next(P) (P)->next

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "../stack/stackChar.h"
#include "../boolean/boolean.h"

typedef char String[50];

typedef char infotypeTree[10];
typedef struct tElmtNode *addressTree;
typedef struct tElmtNode {
			infotypeTree info;
			addressTree left;
			addressTree right;
		} ElmtNode;
typedef addressTree BinTree;

// Meng-return address hasil alokasi Tree	
// i.s   : X belum dialokasi.						
// f.s   : Menghasilkan address X.	
addressTree AlokasiTree(infotypeTree X);

// Meng-return true jika Tree kosong.	
// i.s   : P dideklarasikan.					  		
// f.s   : P diketahui kosong atau tidaknya.  		
boolean IsEmptyTree(BinTree P);

// Meng-return anak kiri Tree.	
// i.s   : P dideklarasikan.				  	
// f.s   : Anak kiri P direturn.
BinTree GetLeft(BinTree P);
	  	
// Meng-return anak kanan Tree.	
// i.s   : P dideklarasikan.				  		
// f.s   : Anak kanan P direturn.
BinTree GetRight(BinTree P);
	  		
// Membuat sebuah node baru di Tree .	
// i.s   : P dan X dideklarasikan.					
// f.s   : P berhasil dibuat dengan infotype X.	
void newNode(BinTree *P, infotypeTree X);

// Membuat sebuah Tree.								
// i.s   : P, L, R  dan X dideklarasikan.						 	
// f.s   : Menghasilkan Tree P dengan anak kiri L,
//		   anak kanan R dan infotype X.	
void MakeTree(infotypeTree X, BinTree L, BinTree R, BinTree *P);
						
// Menampilkan semua info dari setiap node pada Expression Tree.	
// i.s   : Pohon P dideklarasikan.										
// f.s   : Info setiap node pada Tree P ditampilkan.
void PrintInfoTree(BinTree P);
		
// Melakukan casting terhadap sebuah String menjadi integer   
// lalu mengembalikannya.										
// i.s   : X adalah String dideklarasikan.							
// f.s   : Integer hasil casting terhadap X.
float Float(String X);
			
// Meng-return true jika karakter yang diperiksa merupakan operator.	
// i.s   : Karakter yang diperiksa dideklarasikan.							
// f.s   : Karakter yang diperiksa diketahui operator atau bukan.
boolean Operator(char c);
		
// Meng-return nilai prioritas dari sebuah operator, 
// nilai berbanding lurus dengan prioritas.				
// i.s   : X dideklarasikan.								
// f.s   : Nilai prioritas X dikirimkan.
int Prioritas(char x);
				
// Meng-return true jika operator1 memiliki prioritas yang
// lebih tinggi dibanding operator2.								
// i.s   : a dan b dideklarasikan.										
// f.s   : Diketahui operator mana yang memiliki nilai prioritas tinggi.
boolean PrioritasKah(char a, char b);
	
// Mengkonversi ekspresi infix ke postfix.			
// i.s   : infix dideklarasikan.						
// f.s   : infix berhasil dikonversi menjadi postfix.
void InfixKePostfix(String infix, String postfix);
	
// Meng-return hasil kalkuasi dari Expression Tree.	
// i.s   : P dideklarasikan.								
// f.s   : Hasil kalkulasi dari P direturn.	
float CalculateTree(BinTree P);
		
#endif