#include "library/kalkulator/kalkulator.h"

//author : Aqil Rahman
// Menampilkan main menu.			
// i.s   : Sembarang.							
// f.s   : Ditampilkannya main menu.

int main() {

	system("cls");
	gotoxy(30,10); puts("=`=`=`=`=`=`=`=`=` KALKULATOR `=`=`=`=`=`=`=`=`=");
	gotoxy(45,11); puts("*** MAIN MENU ***\n");
	gotoxy(38,12); puts("1. Kalkulator");
	gotoxy(38,13); puts("2. Zakat");
	gotoxy(38,14); puts("3. About");
	gotoxy(38,15); puts("4. Exit");
	gotoxy(30,16); puts("Enter according to the number choice : ");
	gotoxy(30,17); switch(getch()) {	
		case '1' :
		    kalkulatorMenu();
			break;
		case '2' : 
			ZakatMenu();
			break;
		case '3' :
			Identity();
			break;
		case '4' :
			system("cls");
			gotoxy(35,14); puts("Terima kasih telah menggunakan aplikasi, BYE - BYE");
			return 0;
		default :
			puts("\nThe Number is unvailable, try again!");
			system("pause");
			main();
	}
}