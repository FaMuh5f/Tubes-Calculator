
#include "kalkulator.h"

//COORD coord = {X: 0, Y: 0};

// Membuat sebuah Expression Tree dari ekspresi postfix.	
// i.s   	: postfix dideklarasikan.								
// f.s   	: Expression Tree di-return.
// author	: M. RIZKY MAULIDHAN & SHINTA NURKAAFI
BinTree BuildExpressionTree(infotypeTree postfix) {

	int i=0, j, k; 
	stackT StackT;
	BinTree ExpTree, Right, Left;
	infotypeStackT emptyDel;
	infotypeTree tempOpr, tempStr;
 	
 	createStackT(&StackT);
 	
	while (i<strlen(postfix)) {
		if (!Operator(postfix[i]) && postfix[i]!=' ') {
			j=0;
			tempStr[j]=postfix[i];
			while(!Operator(postfix[i+1]) && postfix[i+1]!=' ') {
				tempStr[j+1]=postfix[i+1];
				j++;
				i++;	
			}
			newNode(&ExpTree, tempStr);
			for(k=0; k<strlen(tempStr); k++) {
				tempStr[k]=' ';
			}
			pushStackT(&StackT, ExpTree);
		} 
		else if(postfix[i]=='-' && Operator(postfix[i-4])) { 
			tempOpr[0]=postfix[i];
			newNode(&ExpTree, tempOpr);
		
			Right = Info(Top(StackT));
			popStackT(&StackT, &emptyDel);
							 
			Left = Info(Top(StackT));
			popStackT(&StackT, &emptyDel);
			
			MakeTree(tempOpr, Left, Right, &ExpTree);
			
			pushStackT(&StackT, ExpTree); 
		} 
		else if((postfix[i]=='-' && postfix[i-1]==' ' && postfix[i+1]!=' ' && postfix[i+2]!=' ' && !Operator(postfix[i+2])) || 
				(postfix[i]=='-' && postfix[i-1]!=' ' && postfix[i+1]==' ') || 
				(postfix[i]=='-' && postfix[i-1]!=' ' && Operator(postfix[i+1])) ||
				(postfix[i]=='-' && postfix[i-1]==' ' && postfix[i+1]==' ') ||
				(postfix[i]=='-' && postfix[i-1]==' ' && postfix[i+1]!=' ' && Operator(postfix[i+2])) ||
				(postfix[i]=='-' && postfix[i-1]!=' ' && Operator(postfix[i+1]) && Operator(postfix[i+2]) )) { 
			tempOpr[0]=postfix[i];
			newNode(&ExpTree, tempOpr);
		
			Right = Info(Top(StackT));
			popStackT(&StackT, &emptyDel);
							 
			newNode(&Left, "0");
			
			MakeTree(tempOpr, Left, Right, &ExpTree);
			
			pushStackT(&StackT, ExpTree); 
		}
		else if(postfix[i]!=' ') { 
			tempOpr[0]=postfix[i];
			newNode(&ExpTree, tempOpr);
		
			Right = Info(Top(StackT));
			popStackT(&StackT, &emptyDel);
							 
			Left = Info(Top(StackT));
			popStackT(&StackT, &emptyDel);
			
			MakeTree(tempOpr, Left, Right, &ExpTree);
			
			pushStackT(&StackT, ExpTree); 
		} 
		i++;
	} 
	ExpTree = Info(Top(StackT)); 
	popStackT(&StackT, &ExpTree); 
	return ExpTree; 
}

// Menampilkan menu kalkulator sederhana.			
// i.s   : Sembarang.							
// f.s   : ditampilkannya Menu kalkulator sederhana.
void kalkulatorMenu() {
	
	String input, postfix;
	BinTree ex;
	
	system("cls");
	puts("\n\t\t##KALKULATOR SEDERHANA##\n");
	printf("PETUNJUK PEMAKAIAN : ");
	printf("\n1.      '^' 	  = operasi pangkat. (ex. 2^3 (2 dipangkat 3))");
	printf("\n2. '*' atau 'x'   = operasi perkalian. (ex. 2*3/2x3 (2 dikali 3))");
	printf("\n3. ':' atau '/'   = operasi pembagian. (ex. 2:3/2/3 (2 dibagi 3))");
	printf("\n4.      '+' 	  = operasi penjumlahan. (ex. 2+3 (2 ditambah 3))");
	printf("\n5.      '-'	  = operasi pengurangan. (ex. 2-3 (2 dikurangin 3))");
	printf("\n6. Menambahkan '(' dan ')' ke dalam operasi perhitungan untuk menentukan prioritas.");
	printf("\n7. Tolong lebih spesifik ketika menginputkan operasi.");
	printf("\n   Contoh : anda ingin melakukan operasi prioritas 3 dipangkat 2 dikali 3.");
	printf("\n   Maka anda harus menginputkan (3^2)*3 bukan (3^2)*3.");
	printf("\n8. Bilangan yang berlaku adalah bilangan bulat \n (bilangan negatif, nol, dan bilangan positif) dan bilngan desimal.");
	printf("\n\n");
	system("PAUSE");
	system("cls");
	puts("\n\t\t\t# KALKULATOR #\n");
	printf("Silakan masukkan operasi matematika :\n\n"); scanf(" %s",input);
	InfixKePostfix(input, postfix);
	printf("\n");
	ex = BuildExpressionTree(postfix);
	printf("= %.2f\n", CalculateTree(ex));
	system("PAUSE");
	cek();
}

// Menampilkan menu zakat.			
// i.s   : Sembarang.							
// f.s   : Ditampilkannya Menu zakat.
void ZakatMenu(){
	
	system("cls");
	gotoxy(48,9); puts("##ZAKAT MAAL##");
	gotoxy(38,10); puts("1. Zakat Profesi");
	gotoxy(38,11); puts("2. Zakat Perdagangan");
	gotoxy(38,12); puts("3. Zakat Emas dan Perak");
	gotoxy(38,13); puts("4. Zakat Tabungan");
	gotoxy(38,14); puts("5. Zakat Pertanian");
	gotoxy(38,15); puts("6. Dasar Hukum");
	gotoxy(38,16); puts("7. Kembali ke menu utama");
	gotoxy(38,17); puts("Masukkan pilihan sesuai nomor : ");
	gotoxy(38,18); switch(getch()){
		case '1':
			system("cls");
			hitungZakatProfesi();
			system("pause");
			ZakatMenu();
			break;
		case '2':
			system("cls");
			hitungZakatPerdagangan();
			system("pause");
			ZakatMenu();
			break;
		case '3':
			system("cls");
			hitungZakatEmasPerak();
			system("pause");
			ZakatMenu();
			break;
		case '4':
			system("cls");
			hitungZakatTabungan();
			system("pause");
			ZakatMenu();
			break;
		case '5':
			system("cls");
			hitungZakatPertanian();
			system("pause");
			ZakatMenu();
			break;
		case '6':
			system("cls");
			dasarHukum();
			system("pause");
			ZakatMenu();
			break;
		case '7':
			main();
		default :
			puts("\nThe Number is unvailable, try again!");
			puts("Silakan coba kembali :)");			
	}
}

// Menampilkan informasi author.			
// I.S   : Sembarang.												
// F.S   : Ditampilkannya informasi author.	
void About() {
	
	system("cls");
	puts("\n\t\t##ABOUT##\n");
	puts("Identitas Developer");
		Identity();
}

void cek(){
	system("cls");
	gotoxy(38,12); puts("1. Hitung kembali");
	gotoxy(38,13); puts("2. Kembali ke menu");
	gotoxy(38,14); puts("Enter according to the number choice : ");
	gotoxy(38,15); switch(getch()){
		case'1':
			kalkulatorMenu();
			break;
		case'2':
			main();
			break;
		default:
			puts("The Number is unvailable, try again!");
			system("pause");
			cek();
	}
}

void gotoxy(int x, int y){
	printf("\033[%d;%dH", y, x);
}
