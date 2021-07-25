#include "MainMenu.h"
int MainMenu(){
		puts("\n=`=`=`=`=`=`=`=`=` KALULATOR `=`=`=`=`=`=`=`=`=");
		puts("\n*** MAIN MENU ***\n");
		puts("1. Kalkulator");
		puts("2. Zakat");
		puts("3. About");
		puts("4. Exit");
		puts("Enter according to the number choice : ");
		switch(getch()) {	
		    case '1' :
		    	Calculator();
				break;
			case '2' : 
				Zakat();
				break;
			case '3' :
				Identity();
				break;
			case '4' :
				system("cls");
				return 0;
			default :
				puts("\nThe Number is unvailable, try again!");
			}
		printf("\n");
		system("PAUSE");
		system("cls");
}
