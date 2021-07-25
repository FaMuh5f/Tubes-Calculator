#ifndef STACK_TREE_H
#define STACK_TREE_H

#define Nil NULL
#define Info(P) (P)->info
#define Next(P) (P)->next
#define Top(S)  ((S).top)

#include<stdio.h>
#include<stdlib.h>
#include "../Tree/bintree.h"

typedef BinTree infotypeStackT;
typedef struct tElmST *addressStackT;
typedef struct tElmST{
    infotypeStackT info;
    addressStackT next;
}elmStackT;
typedef struct{
    addressStackT top;
}stackT;

boolean isEmptyStackT(stackT S);
/* Mengembalikan nilai true jika Stack Tree kosong.	*/
/* I.S   : S terdefinisi.					 	*/
/* F.S   : S diketahui apakah kosong atau tidak 	*/

void createStackT(stackT *S);
/* Membuat sebuah Stack Tree kosong.								*/
/* I.S   : S belum terdefinisi.										*/
/* F.S   : Menghasilkan Stack Tree kosong jika alokasi berhasil.	*/

addressStackT alokasiStackT(infotypeStackT X);
/* Menghasilkan address hasil alokasi Stack Tree.		 */
/* I.S   : X belum dialokasikan.							 */
/* F.S   : Menghasilkan address X yang sudah dialokasikan.	 */

void dealokasiStackT(addressStackT P);
/* Membebaskan address P.			*/
/* I.S   : P sudah dialokasikan.		*/
/* F.S   : P berhasil didealokasi.	*/

void pushStackT(stackT *S, infotypeStackT X);
/* Melakukan push elemen ke bagian Top Stack Tree.	*/
/* I.S   : S terdefinisi.							*/
/* F.S   : Elemen X ditambahkan ke bagian Top S.	*/ 

void popStackT(stackT *S, infotypeStackT *X);
/* Menghapus elemen dari bagian Top Stack Tree.	 */
/* I.S   : Top S tidak kosong dan X elemen S.	 */
/* F.S   : Elemen X dihapuskan dari Top S.		 */ 

#endif
