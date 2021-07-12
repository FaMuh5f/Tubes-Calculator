/* File    		: Tree.h 	*/
/* Desk    		: Deklarasi Binary Tree secara rekursif  	*/
/* Oleh    		: ANI RAHMANI / 23501007  			*/
/* Tgl	   		: 21 / 11 / 2001	     			*/
/* Mod     		: Mohammad Rizky Maulidhan */
/* Mod 2		: Fadhil Muhammad */
/* Tgl Mod 		: 12 /07 / 2020 */
/* Tgl Mod 2	: 12 / 07 / 2021 */

#include "bintree.h"

addressTree alokasiTree(infoTypeTree X){
/* 	Mengalokasikan tree dan akan mengembalikannya dengan adress hasil dari alokasi. */
/* 	I.S = X yang belum dialokasi. 													*/
/* 	F.S = Alamat tree yang sudah dialokasi. 										*/

	addressTree P;
	
	P = (addressTree)malloc(sizeof(elmtNode));
	if(P!=Nil){
		strcpy(info(P),X);
		Kiri(P)=Nil;
		Kanan(P)=Nil;
	} 
	return P;
}

boolean treeKosong(binTree P){
/* 	Mengembalikan TRUE bila tree masih kosong. 			*/
/* 	I.S = P terdefinisikan. 							*/
/* 	F.S = P diketahui apakah kosong atau sudah di isi. 	*/

	return (P==Nil);
	
}

binTree keKiri(binTree P){
/* 	Akan mengembalikan anak kiri tree. 	*/
/* 	I.S = P terdefinisikan. 			*/
/* 	F.S = Dikembalikannya anak kiri P. 	*/

	return kiri(P);

}

binTree keKanan(binTree P){
/* 	Akan mengembalikan anak kanan tree. */
/* 	I.S = P terdefinisikan. 			*/
/* 	F.S = Dikembalikannya anak kanan P. */

	return kanan(P);

}

void buatTree(infoTypeTree X, binTree L, binTree R, binTree *P){
/* 	Membuat Tree. 																	*/
/* 	I.S = P, L, R, dan X terdefinisikan. 											*/
/* 	F.S = Tree P berhasil dibuat dengan anak kiri L, anak kanan R, dan infoType X.	*/

	*P=alokasiTree(X);
	if(*P!=Nil){
		strcpy(info(*P),X);
		Kiri(*P)=L;
		Kanan(*P)=R;
	}
}

void buatNode(binTree *P, infoTypeTree X){
/* 	Membuat node baru pada tree. 						*/
/* 	I.S = P dan X terdefinisikan.						*/
/* 	F.S = node baru P behasil dibuat dengan infoType X. */

	*P=alokasiTree(X);
	if(*P!=Nil){
		strcpy(info(*P),X);
		Kiri(*P)=Kanan(*P)=Nil;
	}

}

void printInfoTree(binTree P){
/* 	Menampilkan Tree. 							*/
/* 	I.S = P terdefinisikan.						*/
/* 	F.S = Menampilkan semua info pada Tree P.	*/

	binTree L,R,Px;
	
	if(P!=Nil){
		printInfoTree(Kiri(P));
		printf("Info Node\t: %s\n", Info(P));
		if(keKiri(P)!=Nil){
			L = keKiri(P);
			printf("Anak Kiri\t: %s\n", Info(L));
		}else {
			printf("Anak Kiri\t: Null\n");
		}
		if(keKanan(P)!=Nil){
			R = keKanan(P);
			printf("Anak Kanan\t: %s\n", Info(R));
		}else{
			printf("Anak Kanan\t: Null\n");
		}
		printf("\n");
		printInforTree(Kanan(P));
	}
}

float jadiFloat(String X){
/* 	Mengubah string menjadi int dan mengembalikannya. 					*/
/* 	I.S = X terdefinisikan. 											*/
/* 	F.S = String X berhasil diubah menjadi Integer X dan dikembalikan. 	*/

	return atof(X);

}
boolean Operator(char c){
/* 	Mengembalikan TRUE bila karakter C yang dicek adalah sebuah operator. 			*/
/* 	I.S = karakter C yang dicek terdefinisikan. 									*/
/* 	F.S = Kareakter C yang dicek diketahui apoakah itu adalah operator atau bukan. 	*/

	return (c =='*' || c =='/' || c == '+' || c == '-' || c == ':' || c == '^');

}

int Prioritas(char x){
/* 	Mengembalikan nilai prioritas dari operator. 			*/
/* 	I.S = x terdefinisikan. 								*/
/* 	F.S = Nilai prioritas dari operator X dikembalikan. 	*/

	switch(x){
		case ')': return 0;
		case '(': return 0;
		case '+': return 1;
		case '-': return 1;
		case '*': return 2;
		case '/': return 2;
		case ':': return 2;
		case '^': return 3;
	}
}

boolean prioritasKah(char a, char b){
/* 	Mengembalikan TRUE bila operator1 memiliki nilai priotias yang leibh tinggi
	dari operator2. 													*/
/* 	I.S = a dan b terdefinisikan. 										*/
/* 	F.S = Diketahui operator a atau operator b yang lebih prioritas. 	*/

	return (Prioritas(a)>=Prioritas(b));

}

void infixKePostfix(String infix,String postfix){
/* 	Menggubah ekspresi infix ke postfix. 			*/
/* 	I.S = Infix terdefinisikan. 					*/
/* 	F.S = Infix berhasil dirubah menjadi postfix. 	*/

}

float hitungTree(binTree P){
/* 	Mengembalikan hasil perhitungan dari Tree. 			*/
/* 	I.S = P terdefinisikan. 							*/
/* 	F.s = Hasil perhitungan dari Tree P dikembalikan.	*/

}
