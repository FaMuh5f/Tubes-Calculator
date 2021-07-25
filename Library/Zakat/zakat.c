

#include "zakat.h"

// Menghitung hasil perhitungan zakat profesi
// i.s : P dideklarasikan
// f.s : Return hasil perhitungan zakat profesi
float zakatProfesi(dataProfesi P){
	return (Harta(P) - Kebutuhan(P)) * 0.025;
}

// Meminta input untuk perhitungan zakat provesi dan menampilkan hasil perhitungannya
// i.s : Sembarang
// f.s : Dimintanya input untuk perhitungan zakat provesi dan meng-output hasil perhitungannya
void hitungZakatProfesi(){
	dataProfesi P;
	printf("Total gaji selamat satu tahun: "); scanf("%d", &Harta(P));
	printf("kebutuhan selamat setahun (Rp): "); scanf("%d", &Kebutuhan(P));
	printf("\n");
	printf("Total perhitungan= %d Rupiah\n", Harta(P)+Kebutuhan(P));
	printf("Jika total perhitungan lebih besar dari pada harga Emas 85 gram pada saat itu maka anda harus membayar zakat\n");
	printf("\n");
	printf("Total zakat yang harus dibayar: %.5f rupiah", zakatProfesi(P)); 
	printf("\n");
}

// Menghitung hasil perhitungan zakat perdagangan
// i.s : P dideklarasikan
// f.s : Return hasil perhitungan zakat perdagangan
float zakatPerdagangan(dataPerdagangan P){
	return((Modal(P)+Laba(P)+Piutang(P)) - (Hutang(P)+Rugi(P))) * 0.025;
}

// Meminta input untuk perhitungan zakat perdagangan dan menampilkan hasil perhitungannya
// i.s : Sembarang
// f.s : Dimintanya input untuk perhitungan zakat perdagangan dan meng-output hasil perhitungannya
void hitungZakatPerdagangan(){
	dataPerdagangan P;
	printf("Total modal selama satu tahun: "); scanf("%d", &Modal(P));
	printf("Total laba selama satu tahun: "); scanf("%d", &Laba(P));
	printf("Total piutang selama satu tahun: "); scanf("%d", &Piutang(P));
	printf("Total hutang jatuh tempo selama satu tahun: "); scanf("%d", &Hutang(P));
	printf("Total Kerugian selama satu tahun: "); scanf("%d", &Rugi(P));
	printf("\n");
	printf("Total perhitungan= %d Rupiah\n", (Modal(P)+Laba(P)+Piutang(P))-(Hutang(P)+Rugi(P)));
	printf("Jika total perhitungan lebih besar dari pada harga Emas 85 gram pada saat itu maka anda harus membayar zakat\n");
	printf("\n");
	printf("Total zakat yang harus dibayar: %.5f rupiah", zakatPerdagangan(P));
	printf("\n");
}

// Menghitung hasil perhitungan zakat emas atau perak
// i.s : P dideklarasikan
// f.s : Return hasil perhitungan zakat emas atau perak
float zakatEmasPerak(dataEmasPerak P){
	return(Milik(P) - Pakai(P)) * 0.025;
}

// Meminta input untuk perhitungan zakat emas atau perak dan menampilkan hasil perhitungannya
// i.s : Sembarang
// f.s : Dimintanya input untuk perhitungan zakat emas atau perak dan meng-output hasil perhitungannya
void hitungZakatEmasPerak(){
	dataEmasPerak P;
	puts("1. Emas");
	puts("2. Perak");
	puts("Masukan pilihan sesuai nomor: ");
	switch(getch()){
		case '1':
			system("cls");
			printf("Total emas(gram) milik: "); scanf("%d", &Milik(P));
			printf("Total emas(gram) pakai: "); scanf("%d", &Pakai(P));
			printf("\n");
			printf("Total emas= %d gram\n", Milik(P)-Pakai(P));
			printf("Jika total emas lebih besar dari pada 85 gram maka anda harus membayar zakat\n");
			printf("\n");
			printf("Total zakat yang harus dibayar: %.5f gram", zakatEmasPerak(P));
			printf("\n");
			break;
		case '2':
			system("cls");
			printf("Total perak(gram) milik selama satu tahun: "); scanf("%d", &Milik(P));
			printf("Total perak(gram) pakai selama satu tahun: "); scanf("%d", &Pakai(P));
			printf("\n");
			printf("Total perak= %d gram\n", Milik(P)-Pakai(P));
			printf("Jika total perak lebih besar dari pada 595 gram maka anda harus membayar zakat\n");
			printf("\n");
			printf("Total zakat yang harus dibayar: %.5f gram", zakatEmasPerak(P));
			printf("\n");
			break;
	}
}

// Menghitung hasil perhitungan zakat tabungan
// i.s : P dideklarasikan
// f.s : Return hasil perhitungan zakat tabungan
float zakatTabungan(dataTabungan P){
	return (Saldo(P) - Bagi(P)) * 0.025;
}

// Meminta input untuk perhitungan zakat tabungan dan menampilkan hasil perhitungannya
// i.s : Sembarang
// f.s : Dimintanya input untuk perhitungan zakat tabungan dan meng-output hasil perhitungannya
void hitungZakatTabungan(){
	dataTabungan P;
	printf("Total Saldo selama satu tahun: "); scanf("%d", &Saldo(P));
	printf("Total bagi hasil selama satu tahun: "); scanf("%d", &Bagi(P));
	printf("\n");
	printf("Total perhitungan= %d rupiah\n", Saldo(P)-Bagi(P));
	printf("Jika total harta lebih besar dari pada harga Emas 85 gram pada saat itu maka anda harus membayar zakat\n");
	printf("\n");
	printf("Total zakat yang harus dibayar: %.5f rupiah", zakatTabungan(P));
	printf("\n");
}

// Menghitung hasil perhitungan zakat pertanian
// i.s : P dideklarasikan
// f.s : Return hasil perhitungan zakat pertanian
float zakatPertanian(dataPertanian P){
	system("cls");
	puts("1. Air hujan atau sungai");
	puts("2. Air irigasi");
	puts("Masukan pilihan sesuai nomor: ");
	switch(getch()){
		case '1':
			return Panen(P)*0.1;
		case '2':
			return Panen(P)*0.05;
	}
	
}

// Meminta input untuk perhitungan zakat pertanian dan menampilkan hasil perhitungannya
// i.s : Sembarang
// f.s : Dimintanya input untuk perhitungan zakat pertanian dan meng-output hasil perhitungannya
void hitungZakatPertanian(){
	dataPertanian P;
	printf("Jika total hasil panen lebih besar dari pada 520 kg maka anda harus membayar zakat\n");
	printf("\n");
	printf("Total hasil panen ketika panen(kg): "); scanf("%d", &Panen(P));
	printf("Total zakat yang harus dibayar: %.5f kg", zakatPertanian(P));	
	printf("\n");
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
	printf("sumber : rumaysho.com");
	printf("\n");
}
