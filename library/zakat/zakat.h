// author : Fadhil Muhammad

#ifndef ZAKAT_H
#define ZAKAT_H

#define Harta(P) P.HartaProfesi
#define Kebutuhan(P) P.Kebutuhan
#define Modal(P) P.Modal
#define Laba(P) P.Laba
#define Piutang(P) P.Piutang
#define Hutang(P) P.HutangJatuhTempo
#define Rugi(P) P.Kerugian
#define Milik(P) P.Milik
#define Pakai(P) P.Pakai
#define Saldo(P) P.Saldo
#define Bagi(P) P.BagiHasil
#define Panen(P) P.Panen

#include<stdio.h>
#include<math.h>

typedef struct{
	int HartaProfesi;
	int Kebutuhan;
}dataProfesi;

typedef struct{
	int Modal;
	int Laba;
	int Piutang;
	int HutangJatuhTempo;
	int Kerugian;
}dataPerdagangan;

typedef struct{
	int Milik;
	int Pakai;
}dataEmasPerak;

typedef struct{
	int Saldo;
	int BagiHasil;
}dataTabungan;

typedef struct{
	int Panen;
}dataPertanian;

// Menghitung hasil perhitungan zakat profesi
// i.s : P dideklarasikan
// f.s : Return hasil perhitungan zakat profesi
float zakatProfesi(dataProfesi P);

// Meminta input untuk perhitungan zakat provesi dan menampilkan hasil perhitungannya
// i.s : Sembarang
// f.s : Dimintanya input untuk perhitungan zakat provesi dan meng-output hasil perhitungannya
void hitungZakatProfesi();

// Menghitung hasil perhitungan zakat perdagangan
// i.s : P dideklarasikan
// f.s : Return hasil perhitungan zakat perdagangan
float zakatPerdagangan(dataPerdagangan P);

// Meminta input untuk perhitungan zakat perdagangan dan menampilkan hasil perhitungannya
// i.s : Sembarang
// f.s : Dimintanya input untuk perhitungan zakat perdagangan dan meng-output hasil perhitungannya
void hitungZakatPerdagangan();

// Menghitung hasil perhitungan zakat emas atau perak
// i.s : P dideklarasikan
// f.s : Return hasil perhitungan zakat emas atau perak
float zakatEmasPerak(dataEmasPerak P);

// Meminta input untuk perhitungan zakat emas atau perak dan menampilkan hasil perhitungannya
// i.s : Sembarang
// f.s : Dimintanya input untuk perhitungan zakat emas atau perak dan meng-output hasil perhitungannya
void hitungZakatEmasPerak();

// Menghitung hasil perhitungan zakat tabungan
// i.s : P dideklarasikan
// f.s : Return hasil perhitungan zakat tabungan
float zakatTabungan(dataTabungan P);

// Meminta input untuk perhitungan zakat tabungan dan menampilkan hasil perhitungannya
// i.s : Sembarang
// f.s : Dimintanya input untuk perhitungan zakat tabungan dan meng-output hasil perhitungannya
void hitungZakatTabungan();

// Menghitung hasil perhitungan zakat pertanian
// i.s : P dideklarasikan
// f.s : Return hasil perhitungan zakat pertanian
float zakatPertanian(dataPertanian P);

// Meminta input untuk perhitungan zakat pertanian dan menampilkan hasil perhitungannya
// i.s : Sembarang
// f.s : Dimintanya input untuk perhitungan zakat pertanian dan meng-output hasil perhitungannya
void hitungZakatPertanian();

// Menghitung dasar hukum zakat dalam islam
// i.s : Sembarang
// f.s : Ditampilkannya dasar hukum zakat maal dalam islam
void dasarHukum();

#endif


