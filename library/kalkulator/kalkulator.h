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

// Deskripsi : Mengarahkan user ke menu selanjutnya.
// i.s : sembarang.
// f.s : program mengarahkan ke menu lain.
void cek(); 

// Deskripsi : Memperbaiki interface program.
// i.s : program belum tersusun.
// f.s : program sudah tersusun.
void gotoxy();

// Deskripsi : Mengecek apakah inputan sudah benar atau belum.
// i.s : sembarang.
// f.s : String input_s.
int isMasukanBenar(String input_s);

// Deskripsi : Mengecek apakah operator sudah benar.
// i.s : sembarang.
// f.s : operator sudah tepat dan berada di tempat yang tepat.
int isOperator(char c);

// Deskripsi : Mengecek apakah berupa angka.
// i.s : sembarang.
// f.s : inputan adalah angka dan berada diposisi yang benar.
int isDigit(char c);

// Deskripsi : Mengecek apakah ada kurung atau tidak.
// i.s : sembarang.
// f.s : tanda kurung ada di dalam hitungan.
int isUpperPrior(char c);

#endif
