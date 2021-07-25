#ifndef STACK_C_H
#define STACK_C_H

#define Nil NULL
#define Info(P) (P)->info
#define Next(P) (P)->next
#define Top(S)  ((S).top)

#include<stdio.h>
#include<stdlib.h>
#include "../Boolean/boolean.h"

typedef char infotypeStackC;
typedef struct tElmSC *addressStackC;
typedef struct tElmSC{
    infotypeStackC info;
    addressStackC next;
}elmStackC;
typedef struct{
    addressStackC top;
}stackC;

boolean isEmptyStackC(stackC S);
/* Mengembalikan true jika Stack Char kosong. */
/* I.S   : S terdefinisi.					  */
/* F.S   : S diketahui kosong atau tidaknya.  */

void createStackC(stackC *S);
/* Membuat sebuah Stack Char kosong.							 */
/* I.S   : S belum terdefinisi.									 */
/* F.S   : Menghasilkan Stack Char kosong jika alokasi berhasil. */

addressStackChar alokasiStackC(infotypeStackC X);
/* Menghasilkan address hasil alokasi Stack Char.		*/
/* I.S   : X belum dialokasikan.							*/
/* F.S   : Menghasilkan address X yang sudah dialokasikan.	*/

void dealokasiStackC(addressStackC P);
/* Membebaskan address P.			*/
/* I.S   : P sudah dialokasikan.		*/
/* F.S   : P berhasil didealokasikan.	*/

void pushStackC(stackC *S, infotypeStackC X);
/* Melakukan push elemen ke bagian Top Stack Char.	*/
/* I.S   : S terdefinisi.							*/
/* F.S   : Elemen X ditambahkan ke bagian Top S.	*/ 

void popStackC(stackC *S, infotypeStackC *X);
/* Menghapus elemen dari bagian Top Stack Char.  */
/* I.S   : Top S tidak kosong dan X elemen S.	 */
/* F.S   : Elemen X dihapuskan dari Top S.		 */ 

#endif
