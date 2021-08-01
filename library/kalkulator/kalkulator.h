// author : Fadhil Muhammad

#ifndef KALKULATOR_H
#define KALKULATOR_H

//#include <windows.h>
#include "../tree/tree.h"
#include "../stack/stacktree.h"
#include "../zakat/zakat.h"
#include "../about/about.h"

// Membuat sebuah Expression Tree dari ekspresi postfix.	
// i.s   	: postfix dideklarasikan.								
// f.s   	: Expression Tree di-return.
// author	: M. RIZKY MAULIDHAN & SHINTA NURKAAFI
BinTree BuildExpressionTree(infotypeTree postfix);
					
// Menampilkan menu kalkulator sederhana.			
// i.s   : Sembarang.							
// f.s   : Ditampilkannya Menu kalkulator sederhana.
void kalkulatorMenu();

// Menampilkan menu zakat.			
// i.s   : Sembarang.							
// f.s   : Ditampilkannya Menu zakat.
void ZakatMenu();

// Menampilkan informasi author.			
// i.s   : Sembarang.												
// f.s   : Ditampilkannya informasi author.	
void About();

// Menampilkan main menu.			
// i.s   : Sembarang.							
// f.s   : Ditampilkannya main menu.		
int mainMenu();

// Nama Modul : Goto X Y
// Deskripsi : Membuat game menjadi lebih rapih dengan menempatkan kata ke tengah layar
// Author : Nauval Ozora Mahadri
// Versi :  v1: 11 feb 2021, v2 : 13 feb 2021
// IS : Kalimat masih dipinggir layar
// FS : Kalimat sudah berada di tengah layar
//void gotoxy(int x, int y);

// Deskripsi : Menampilkan pilihan setelah penghitungan operasi
// i.s : sembarang
// f.s : pilihan diinputkan
void cek(); 

void gotoxy();

#endif

