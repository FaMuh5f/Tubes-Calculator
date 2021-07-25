#include "About.h"

void Aqil(){
	printf("Nama \t\t\t: Aqil Rahman\n");
	printf("Tempat, Tanggal Lahir \t: Payakumbuh, 23 Oktober 2001\n");
	printf("Jenis Kelamin \t\t: Laki-laki\n");
	printf("Agama \t\t\t: Islam\n");
	printf("E-mail \t\t\t: aqil.rahman.tif420@polban.ac.id\n");
	printf("Hobi \t\t\t: Korean Dramas\n");
	printf("Motto Hidup \t\t: Be Your Self\n");
}

void Fadhil(){

	printf("Nama \t\t\t: Fadhil Muhammad\n");
	printf("Tempat, Tanggal Lahir \t: Bukittinggi, 29 April 2002\n");
	printf("Jenis Kelamin \t\t: Laki-laki\n");
	printf("Agama \t\t\t: Islam\n");
	printf("E-mail \t\t\t: fm290402@gmail.com\n");
	printf("Hobi \t\t\t: Menikmati entertainment yang ada ( rata-rata jepang) \n");
	printf("Motto Hidup \t\t: Fast and Accurate\n");
}

void Nauval(){
	printf("Nama \t\t\t: Nauval Ozora Mahadri\n");
	printf("Tempat, Tanggal Lahir \t: Bandung, 29 Juli 2002\n");
	printf("Jenis Kelamin \t\t: Laki-laki\n");
	printf("Agama \t\t\t: Islam\n");
	printf("E-mail \t\t\t: ozoramahadri02@gmail.com\n");
	printf("Hobi \t\t\t: Main Game\n");
	printf("Motto Hidup \t\t: gak ada yang gak bisa\n");
}
	
void Identity(){
	/* Menampilkan menu identitas.				*/
	/* I.S   : Sembarang.						*/
	/* F.S   : Menu identitas ditampilkan.		*/
	
	printf("\n\n");
	system("cls");
	
	printf("\n\t\t# IDENTITAS DEVELOPER #\n");
	puts("\n1. Aqil Rahman - 2015240");
	puts("2. Fadhil Muhammad - 2015240\n");
	puts("3. Nauval Ozora Mahadri - 201524055\n");
	puts("Masukkan pilihan sesuai nomor : ");
	switch(getch()) {	
	    case '1' :
	    	Aqil();
			break;
		case '2' : 
			Fadhi();
			break;
		case '3' :
			Nauval();
			break;
		default :
			puts("\nNomor yang Anda masukkan tidak valid!");
	}
}

