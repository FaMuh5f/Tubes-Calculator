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
#define Kiri(P) (P)->left
#define Kanan(P) (P)->right
#define Next(P) (P)->next

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "../Boolean/boolean.h"

string char String[50];

typedef char infoTypeTree[10];
typedef struct tElmtNode *addressTree;
typedef struct tElmtNode {
	infoTypeTree info;
	addressTree kanan;
	addressTree kiri;
}ElmtNode;
typedef addressTree binTree;

addressTree AlokasiTree(infoTypeTree X);
/* 	Mengalokasikan tree dan akan mengembalikannya dengan adress hasil dari alokasi. */
/* 	I.S = X yang belum dialokasi. 													*/
/* 	F.S = Alamat tree yang sudah dialokasi. 										*/

boolean treeKosong(binTree P);
/* 	Mengembalikan TRUE bila tree masih kosong. 			*/
/* 	I.S = P terdefinisikan. 							*/
/* 	F.S = P diketahui apakah kosong atau sudah di isi. 	*/

binTree keKiri(binTree P);
/* 	Akan mengembalikan anak kiri tree. 	*/
/* 	I.S = P terdefinisikan. 			*/
/* 	F.S = Dikembalikannya anak kiri P. 	*/

binTree keKanan(binTree P);
/* 	Akan mengembalikan anak kanan tree. */
/* 	I.S = P terdefinisikan. 			*/
/* 	F.S = Dikembalikannya anak kanan P. */

void buatTree(infoTypeTree X, binTree L, binTree R, binTree *P);
/* 	Membuat Tree. 																	*/
/* 	I.S = P, L, R, dan X terdefinisikan. 											*/
/* 	F.S = Tree P berhasil dibuat dengan anak kiri L, anak kanan R, dan infoType X.	*/

void buatNode(binTree *P, infoTypeTree X);
/* 	Membuat node baru pada tree. 						*/
/* 	I.S = P dan X terdefinisikan.						*/
/* 	F.S = node baru P behasil dibuat dengan infoType X. */

void printInfoTree(binTree P);
/* 	Menampilkan Tree. 							*/
/* 	I.S = P terdefinisikan.						*/
/* 	F.S = Menampilkan semua info pada Tree P.	*/

float jadiFloat(String X);
/* 	Mengubah string menjadi int dan mengembalikannya. 					*/
/* 	I.S = X terdefinisikan. 											*/
/* 	F.S = String X berhasil diubah menjadi Integer X dan dikembalikan. 	*/

boolean Operator(char c);
/* 	Mengembalikan TRUE bila karakter C yang dicek adalah sebuah operator. 			*/
/* 	I.S = karakter C yang dicek terdefinisikan. 									*/
/* 	F.S = Kareakter C yang dicek diketahui apoakah itu adalah operator atau bukan. 	*/

int Prioritas(char x);
/* 	Mengembalikan nilai prioritas dari operator. 			*/
/* 	I.S = x terdefinisikan. 								*/
/* 	F.S = Nilai prioritas dari operator X dikembalikan. 	*/

boolean prioritasKah(char a, char b);
/* 	Mengembalikan TRUE bila operator1 memiliki nilai priotias yang leibh tinggi
	dari operator2. 													*/
/* 	I.S = a dan b terdefinisikan. 										*/
/* 	F.S = Diketahui operator a atau operator b yang lebih prioritas. 	*/

void infixKePostfix(String infix,String postfix);
/* 	Menggubah ekspresi infix ke postfix. 			*/
/* 	I.S = Infix terdefinisikan. 					*/
/* 	F.S = Infix berhasil dirubah menjadi postfix. 	*/

float hitungTree(binTree P);
/* 	Mengembalikan hasil perhitungan dari Tree. 			*/
/* 	I.S = P terdefinisikan. 							*/
/* 	F.s = Hasil perhitungan dari Tree P dikembalikan.	*/


#endif
