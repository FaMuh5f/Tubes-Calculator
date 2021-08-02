#include <stdio.h>
#include <ctype.h>

#include "zakat.h"

// Meminta input untuk perhitungan zakat provesi dan menampilkan hasil perhitungannya
// i.s : Sembarang
// f.s : Dimintanya input untuk perhitungan zakat provesi dan meng-output hasil perhitungannya
void hitungZakatProfesi(){
	int Harta,Kebutuhan,Total;
	float Zakat;
	printf("Total gaji selama satu tahun: "); Harta = input();
	printf("kebutuhan selama setahun (Rp): "); Kebutuhan = input();
	printf("\n");
	Total = Harta - Kebutuhan;
	printf("Total perhitungan= %d Rupiah\n", Total);
	printf("Jika total perhitungan lebih besar dari pada harga Emas 85 gram pada saat itu maka anda harus membayar zakat\n");
	printf("\n");
	Zakat = ((float)(Harta - Kebutuhan))*25/1000;
	printf("Total zakat yang harus dibayar: %.5f rupiah", Zakat);
	printf("\n");
	
}

// Meminta input untuk perhitungan zakat perdagangan dan menampilkan hasil perhitungannya
// i.s : Sembarang
// f.s : Dimintanya input untuk perhitungan zakat perdagangan dan meng-output hasil perhitungannya
void hitungZakatPerdagangan(){
	int Modal,Laba,Piutang,Hutang,Rugi,Total;
	float Zakat;
	printf("Total modal selama satu tahun: "); Modal = input();
	printf("Total laba selama satu tahun: "); Laba = input();
	printf("Total piutang selama satu tahun: "); Piutang = input();
	printf("Total hutang jatuh tempo selama satu tahun: "); Hutang = input();
	printf("Total Kerugian selama satu tahun: "); Rugi = input();
	printf("\n");
	Total = (Modal+Laba+Piutang)-(Hutang+Rugi);
	printf("Total perhitungan= %d Rupiah\n", Total);
	printf("Jika total perhitungan lebih besar dari pada harga Emas 85 gram pada saat itu maka anda harus membayar zakat\n");
	printf("\n");
	Zakat = ((float)((Modal+Laba+Piutang)-(Hutang+Rugi)))*25/1000;
	printf("Total zakat yang harus dibayar: %.5f rupiah", Zakat);
	printf("\n");
}

// Meminta input untuk perhitungan zakat emas atau perak dan menampilkan hasil perhitungannya
// i.s : Sembarang
// f.s : Dimintanya input untuk perhitungan zakat emas atau perak dan meng-output hasil perhitungannya
void hitungZakatEmasPerak(){
	int Milik,Pakai,Total;
	float Zakat;
	puts("1. Emas");
	puts("2. Perak");
	puts("Masukan pilihan sesuai nomor: ");
	switch(getch()){
		case '1':
			system("cls");
			printf("Total emas(gram) milik: "); Milik = input();
			printf("Total emas(gram) pakai: "); Pakai = input();
			printf("\n");
			Total = Milik-Pakai;
			printf("Total emas= %d gram\n", Total);
			printf("Jika total emas lebih besar dari pada 85 gram maka anda harus membayar zakat\n");
			printf("\n");
			Zakat = ((float)(Milik-Pakai))*25/1000;
			printf("Total zakat yang harus dibayar: %.5f gram", Zakat);
			printf("\n");
			break;
		case '2':
			system("cls");
			printf("Total perak(gram) milik: "); Milik = input();
			printf("Total perak(gram) pakai: "); Pakai = input();
			printf("\n");
			Total = Milik-Pakai;
			printf("Total perak= %d gram\n", Total);
			printf("Jika total perak lebih besar dari pada 595 gram maka anda harus membayar zakat\n");
			printf("\n");
			Zakat = ((float)(Milik-Pakai))*25/1000;;
			printf("Total zakat yang harus dibayar: %.5f gram", Zakat);
			printf("\n");
			break;
	}
}

// Meminta input untuk perhitungan zakat tabungan dan menampilkan hasil perhitungannya
// i.s : Sembarang
// f.s : Dimintanya input untuk perhitungan zakat tabungan dan meng-output hasil perhitungannya
void hitungZakatTabungan(){
	int Saldo,Bagi,Total;
	float Zakat;
	printf("Total Saldo selama satu tahun: "); Saldo = input();
	printf("Total bagi hasil selama satu tahun: "); Bagi = input();
	printf("\n");
	Total = Saldo - Bagi;
	printf("Total perhitungan= %d rupiah\n", Total);
	printf("Jika total harta lebih besar dari pada harga Emas 85 gram pada saat itu maka anda harus membayar zakat\n");
	printf("\n");
	Zakat = ((float)(Saldo - Bagi))*25/1000;
	printf("Total zakat yang harus dibayar: %.5f rupiah", Zakat);
	printf("\n");
}

// Meminta input untuk perhitungan zakat pertanian dan menampilkan hasil perhitungannya
// i.s : Sembarang
// f.s : Dimintanya input untuk perhitungan zakat pertanian dan meng-output hasil perhitungannya
void hitungZakatPertanian(){
	int Panen,Total;
	float Zakat;
	printf("Jika total hasil panen lebih besar dari pada 520 kg maka anda harus membayar zakat\n");
	printf("\n");
	printf("Total hasil panen ketika panen(kg): "); Panen = input();
	system("PAUSE");
	system("cls");
	puts("Sumber Air");
	puts("1. Air hujan atau sungai");
	puts("2. Air irigasi");
	puts("Masukan pilihan sesuai nomor: ");
	switch(getch()){
		case '1':
			Zakat = ((float)Panen)*1/10;
			printf("Total zakat yang harus dibayar: %.5f kg", Zakat);
			break;
		case '2':
			Zakat = ((float)Panen)*5/100;
			printf("Total zakat yang harus dibayar: %.5f kg", Zakat);
			break;
	}	
}

// Menampilkan dasar hukum zakat dalam islam
// i.s : Sembarang
// f.s : Ditampilkannya dasar hukum zakat maal dalam islam
void dasarHukum(){
	printf("Zakat merupakan bagian dari rukun Islam yang lima, merupakan kewajiban yang sudah ditetapkan bagi yang sudah terpenuhi syarat-syaratnya.\n");
	printf("Allah Taala berfirman,\n");
	printf("Dan dirikanlah shalat, tunaikanlah zakat dan ruku’lah beserta orang-orang yang ruku. (QS. Al-Baqarah: 43)\n");
	printf("Juga dalam ayat,\n");
	printf("Ambillah zakat dari sebagian harta mereka, dengan zakat itu kamu membersihkan dan mensucikan mereka dan mendoalah untuk mereka. Sesungguhnya doa kamu itu (menjadi) ketenteraman jiwa bagi mereka. Dan Allah Maha Mendengar lagi Maha Mengetahui. (QS. At-Taubah: 103)\n");
	printf("Orang yang enggan menunaikan zakat dalam keadaan meyakini wajibnya, ia adalah orang fasik dan akan mendapatkan siksa yang pedih di akhirat. Allah Ta’ala berfirman,\n");
	printf("Dan orang-orang yang menyimpan emas dan perak dan tidak menafkahkannya pada jalan Allah, maka beritahukanlah kepada mereka, (bahwa mereka akan mendapat) siksa yang pedih, pada hari dipanaskan emas perak itu dalam neraka jahannam, lalu dibakar dengannya dahi mereka, lambung dan punggung mereka (lalu dikatakan) kepada mereka: “Inilah harta bendamu yang kamu simpan untuk dirimu sendiri, maka rasakanlah sekarang (akibat dari) apa yang kamu simpan itu. (QS. At Taubah: 34-35)\n");
	printf("Perintah menunaikan zakat dalam hadits disebutkan dalam hadits dari Ibnu ‘Abbas radhiyallahu ‘anhuma, bahwa Nabi shallallahu ‘alaihi wa sallam pernah mengutus Mu’adz radhiyallahu ‘anhu ke Yaman. Rasulullah shallallahu ‘alaihi wa sallam bersabda,\n");	printf("Ajaklah mereka untuk bersaksi bahwa tidak ada sesembahan yang berhak disembah selain Allah dan aku adalah utusan Allah. Jika mereka menaati itu, beritahukanlah pada mereka bahwa Allah telah mewajibkan kepada mereka shalat lima waktu sehari semalam. Jika mereka menaati itu, beritahukanlah pada mereka bahwa Allah telah mewajibkan kepada mereka zakat yang wajib dari harta mereka diambil dari orang kaya di antara mereka dan disalurkan pada orang miskin di tengah-tengah mereka. (HR. Bukhari, no. 1395 dan Muslim, no. 19)\n");
	printf("Ajaklah mereka untuk bersaksi bahwa tidak ada sesembahan yang berhak disembah selain Allah dan aku adalah utusan Allah. Jika mereka menaati itu, beritahukanlah pada mereka bahwa Allah telah mewajibkan kepada mereka shalat lima waktu sehari semalam. Jika mereka menaati itu, beritahukanlah pada mereka bahwa Allah telah mewajibkan kepada mereka zakat yang wajib dari harta mereka diambil dari orang kaya di antara mereka dan disalurkan pada orang miskin di tengah-tengah mereka. (HR. Bukhari, no. 1395 dan Muslim, no. 19)\n");
	printf("\n");
	printf("Syarat Bayar Zakat\n");
	printf("Yang wajib mengeluarkan zakat adalah yang Islam dan merdeka, tidak dipersyaratkan harus baligh dan berakal. Karena orang gila dan anak kecil jika memang memiliki harta yang sudah memenuhi syarat juga tetap dikeluarkan zakatnya.\n");
	printf("Berkaitan dengan harta yang dikeluarkan, syarat yang harus dipenuhi adalah: (1) harta tersebut dimiliki secara sempurna, (2) harta tersebut adalah harta yang berkembang, (3) harta tersebut telah mencapai nishab, (4) telah mencapai haul (harta tersebut bertahan selama setahun), (5) harta tersebut merupakan kelebihan dari kebutuhan pokok.\n");
	printf("Beberapa harta yang para ulama sepakat wajib dikenai zakat adalah:\n");
	printf("1. Atsman (emas, perak, dan mata uang)\n");
	printf("2. Hewan ternak (unta, sapi, dan kambing)\n");
	printf("3. Pertanian dan buah-buahan (gandum, kurma, dan anggur)\n");
	printf("\n");
	printf("Source : rumaysho.com");
}

// menerima input hanya integer dengan menggunakan tabel ASCII
// i.s : Sembarang
// f.s : Di-returnkan integer
int input(){
	int input, temp, status;
	status = scanf("%d", &input);
	while(status!=1){
		while((temp=getchar()) != EOF && temp != '\n');
		printf("Invalid input! please enter a number: ");
		status = scanf("%d", &input);
	}
	return input;
}