/* File    		: Tree.h 	*/
/* Desk    		: Deklarasi Binary Tree secara rekursif  	*/
/* Oleh    		: ANI RAHMANI / 23501007  			*/
/* Tgl	   		: 21 / 11 / 2001	     			*/
/* Mod     		: Mohammad Rizky Maulidhan */
/* Mod 2		: Fadhil Muhammad */
/* Tgl Mod 		: 12 /07 / 2020 */
/* Tgl Mod 2	: 12 / 07 / 2021 */

#include "Tree.h"

// Meng-return address hasil alokasi Tree	
// i.s   : X belum dialokasi.						
// f.s   : Menghasilkan address X.
addressTree AlokasiTree(infotypeTree X) {
   	addressTree P;

   	P=(addressTree)malloc(sizeof(ElmtNode));   
	if(P!=Nil) {
		strcpy(Info(P),X);
		Left(P)=Nil;
		Right(P)=Nil;	 
   	}
   	return P;
}

// Meng-return true jika Tree kosong.	
// i.s   : P dideklarasikan.					  		
// f.s   : P diketahui kosong atau tidaknya.  
boolean IsEmptyTree(BinTree P) {
	return (P==Nil);
}

// Meng-return anak kiri Tree.	
// i.s   : P dideklarasikan.				  	
// f.s   : Anak kiri P direturn.
BinTree GetLeft(BinTree P) { 
    return Left(P); 	
}

// Meng-return anak kanan Tree.	
// i.s   : P dideklarasikan.				  		
// f.s   : Anak kanan P direturn.
BinTree GetRight(BinTree P) {
    return Right(P);
}

// Membuat sebuah node baru di Tree .	
// i.s   : P dan X dideklarasikan.					
// f.s   : P berhasil dibuat dengan infotype X.	
void newNode(BinTree *P, infotypeTree X) {  
	*P=AlokasiTree(X);
	if(*P!=Nil) {
		strcpy(Info(*P),X);
	    Left(*P)=Right(*P)=Nil;
	} 
} 

// Membuat sebuah Tree.								
// i.s   : P, L, R  dan X dideklarasikan.						 	
// f.s   : Menghasilkan Tree P dengan anak kiri L,
//		   anak kanan R dan infotype X.	
void MakeTree(infotypeTree X, BinTree L, BinTree R, BinTree *P) {   
	*P=AlokasiTree(X);
	if(*P!=Nil) {
		strcpy(Info(*P),X);
	   	Left(*P)=L;
		Right(*P)=R;	
	}
}

// Menampilkan semua info dari setiap node pada Expression Tree.	
// i.s   : Pohon P dideklarasikan.										
// f.s   : Info setiap node pada Tree P ditampilkan.
void PrintInfoTree(BinTree P) {
	BinTree L, R, Px;
	
	if(P != Nil) {
		PrintInfoTree(Left(P)); 
		printf("Info Node\t: %s\n",Info(P));
		if(GetLeft(P)!=Nil) {
			L = GetLeft(P);
			printf("Left Son\t: %s\n",Info(L));
		}
		else {
			printf("Left Son\t: null\n");
		}
		if(GetRight(P)!=Nil) {
			R = GetRight(P);
			printf("Right Son\t: %s\n",Info(R));
		}
		else{
			printf("Right Son\t: null\n");
		}	
		printf("\n");  
		PrintInfoTree(Right(P));
	}
}

// Melakukan casting terhadap sebuah String menjadi integer   
// lalu mengembalikannya.										
// i.s   : X adalah String dideklarasikan.							
// f.s   : Integer hasil casting terhadap X.
float Float(String X) {	
	return atof(X);
}

// Meng-return true jika karakter yang diperiksa merupakan operator.	
// i.s   : Karakter yang diperiksa dideklarasikan.							
// f.s   : Karakter yang diperiksa diketahui operator atau bukan.
boolean Operator(char c) {  
	return(c=='+' || c=='-' || c=='*' || c=='x' || c=='/' || c ==':' || c =='^');
} 

// Meng-return nilai prioritas dari sebuah operator, 
// nilai berbanding lurus dengan prioritas.				
// i.s   : X dideklarasikan.								
// f.s   : Nilai prioritas X dikirimkan.
int Prioritas(char x) {	
    switch(x) {
        case ')': return 0;
        case '(': return 0;
        case '+': return 1;
        case '-': return 1;
        case '*': return 2;
        case 'x': return 2;
        case '/': return 2;
        case ':': return 2;
		case '^': return 3;    
    }
}

// Meng-return true jika operator1 memiliki prioritas yang
// lebih tinggi dibanding operator2.								
// i.s   : a dan b dideklarasikan.										
// f.s   : Diketahui operator mana yang memiliki nilai prioritas tinggi.
boolean PrioritasKah(char a, char b) {
    return (Prioritas(a)>=Prioritas(b));
}

// Meng-return true jika operator1 memiliki prioritas yang
// lebih tinggi dibanding operator2.								
// i.s   : a dan b dideklarasikan.										
// f.s   : Diketahui operator mana yang memiliki nilai prioritas tinggi.
void InfixKePostfix(String infix, String postfix) {
    int i, index=0, size;
	char tmpchar;
    stackC tmp;
    
    createStackC(&tmp);
    
    size=strlen(infix);
    for(i=0; i<size; i++) {
        switch(infix[i]) {
        	case '.':
            case '0':
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
                postfix[index]=infix[i];
                index++;
                break;
            case '+':
            case '-':
            case '*':
            case 'x':
            case '/':
            case ':':
            case '^':
                postfix[index]=' ';
                index++;            
                if(isEmptyStackC(tmp)){
                    pushStackC(&tmp,infix[i]);
                }
				else if(!PrioritasKah(Info(Top(tmp)),infix[i])){
                    pushStackC(&tmp,infix[i]);
                }
				else{
                    while(!isEmptyStackC(tmp)&&PrioritasKah(Info(Top(tmp)),infix[i])){
                        popStackC(&tmp,&tmpchar);
                        postfix[index]=tmpchar;
                        index++;
                    }                
                    pushStackC(&tmp,infix[i]);
                }
                break;
            case ')':
                while(!isEmptyStackC(tmp)&&Info(Top(tmp))!='('){
                    popStackC(&tmp,&tmpchar);
                    postfix[index]=tmpchar;
                    index++;                    
                }
                popStackC(&tmp,&tmpchar);
                break;
            case '(':
                pushStackC(&tmp,infix[i]);
                break;
        }
    }
    while(!isEmptyStackC(tmp)) {
        popStackC(&tmp,&tmpchar);
        postfix[index]=tmpchar;
        index++;                  
    }    
    postfix[index]='\0';
}

// Meng-return hasil kalkuasi dari Expression Tree.	
// i.s   : P dideklarasikan.								
// f.s   : Hasil kalkulasi dari P direturn.	
float CalculateTree(BinTree P) {
	int i;
	float tmp=1.0;
	  
    if (IsEmptyTree(P)) {
        return 0;  
	}
    else if (IsEmptyTree(Left(P)) && IsEmptyTree(Right(P))) {
        return Float(Info(P));  
    }
  
    float left = CalculateTree(Left(P));  
    float right = CalculateTree(Right(P));  
    
    //if(strcmp(Info(P),"+") || strcmp(Info(P),"-") || strcmp(Info(P),"*") || strcmp(Info(P),"x") || strcmp(Info(P),"/") || strcmp(Info(P),":") || strcmp(Info(P),"^")){
    	if(strcmp(Info(P),"+")==0) {
			return left+right;
		}
		else if(strcmp(Info(P),"-")==0) {
			return left-right;
		}
		else if(strcmp(Info(P),"*")==0) {
			return left*right;
		}
		else if(strcmp(Info(P),"x")==0) {
			return left*right;
		}
		else if(strcmp(Info(P),"/")==0) {
			if(right!=0.00){
				return left/right;
			}
			else{
				puts ("can't divide by zero");
				return 0;
			}
		}
		else if(strcmp(Info(P),":")==0) {
			if(right!=0.00){
				return left/right;
			}
			else{
				puts ("can't divide by zero");
				return 0;
			}
		}
	//}else{
	//	printf("invalid input!");
	//	system("pause");
	//}
	for(i=0; i<right; i++) {
		tmp *= left;
	}
	return tmp;
}