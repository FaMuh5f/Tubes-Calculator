#include "About.h"

// Menampilkan informasi Aqil.				
// I.S   : Sembarang.						
// F.S   : informasi Aqil ditampilkan.
void Aqil(){
	gotoxy(40,16); printf("Nama \t\t\t: Aqil Rahman\n");
	gotoxy(40,17); printf("Tempat, Tanggal Lahir \t: Payakumbuh, 23 Oktober 2001\n");
	gotoxy(40,18); printf("Jenis Kelamin \t\t: Laki-laki\n");
	gotoxy(40,19); printf("Agama \t\t\t: Islam\n");
	gotoxy(40,20); printf("E-mail \t\t\t: aqil.rahman.tif420@polban.ac.id\n");
	gotoxy(40,21); printf("Hobi \t\t\t: Korean Dramas\n");
	gotoxy(40,22); printf("Motto Hidup \t\t: Be Your Self\n");
}

// Menampilkan informasi Fadhil.			
// I.S   : Sembarang.						
// F.S   : informasi Fadhil ditampilkan.
void Fadhil(){

	gotoxy(40,16); printf("Nama \t\t\t: Fadhil Muhammad\n");
	gotoxy(40,17); printf("Tempat, Tanggal Lahir \t: Bukittinggi, 29 April 2002\n");
	gotoxy(40,18); printf("Jenis Kelamin \t\t: Laki-laki\n");
	gotoxy(40,19); printf("Agama \t\t\t: Islam\n");
	gotoxy(40,20); printf("E-mail \t\t\t: fm290402@gmail.com\n");
	gotoxy(40,21); printf("Hobi \t\t\t: Menikmati entertainment yang ada ( rata-rata jepang) \n");
	gotoxy(40,22); printf("Motto Hidup \t\t: Fast and Accurate\n");
}

// Menampilkan informasi Nauval.				
// I.S   : Sembarang.						
// F.S   : informasi Nauval. ditampilkan.
void Nauval(){
	gotoxy(40,16); printf("Nama \t\t\t: Nauval Ozora Mahadri\n");
	gotoxy(40,17); printf("Tempat, Tanggal Lahir \t: Bandung, 29 Juli 2002\n");
	gotoxy(40,18); printf("Jenis Kelamin \t\t: Laki-laki\n");
	gotoxy(40,19); printf("Agama \t\t\t: Islam\n");
	gotoxy(40,20); printf("E-mail \t\t\t: ozoramahadri02@gmail.com\n");
	gotoxy(40,21); printf("Hobi \t\t\t: Main Game\n");
	gotoxy(40,22); printf("Motto Hidup \t\t: gak ada yang gak bisa\n");
}

// Menampilkan menu identitas.				
// I.S   : Sembarang.						
// F.S   : Menu identitas ditampilkan.	
void Identity(){
	
	printf("\n\n");
	system("cls");
	
	gotoxy(48,9); puts("##IDENTITAS DEVELOPER##");
	gotoxy(40,10); puts("1. Aqil Rahman - 2015240");
	gotoxy(40,11); puts("2. Fadhil Muhammad - 2015240");
	gotoxy(40,12); puts("3. Nauval Ozora Mahadri - 201524055");
	gotoxy(40,13); puts("4. Kembali ke menu utama");
	gotoxy(40,14); puts("Masukkan pilihan sesuai nomor : ");
	gotoxy(40,15); switch(getch()) {	
	    case '1' :
	    	Aqil();
	    	gotoxy(40,23); system("pause");
	    	Identity();
			break;
		case '2' : 
			Fadhil();
			gotoxy(40,23); system("pause");
			Identity();
			break;
		case '3' :
			Nauval();
			gotoxy(40,23); system("pause");
			Identity();
			break;
		case '4':
			main();
			break;
		default :
			puts("\nNomor yang Anda masukkan tidak valid!");
	}
}