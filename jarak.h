/* File : jarak.h */

/* spesifikasi ADT Jarak */
#ifndef jarak_H
#define jarak_H
#include "boolean.h"
#include "stdio.h"

/* Notasi Akses */
#define Kilometer(J) (J).KM
#define Meter(J) (J).MM
#define Centimeter(J) (J).CM
typedef struct 
{
 int KM; /* 0..9 */
 int MM; /* 0..999 */
 int CM; /* 0..99 */
} Jarak;

/***** Konstruktor ************/
Jarak MakeJarak(int KM, int MM, int CM);
/* Membentuk Jarak dari KM, MM, CM yg valid */

/*------------validator jarak------------*/
boolean IsJValid(int KM, int MM, int CM);
/* Mengirim true jika KM,MM,CM dapat membentuk Jarak yang valid */

/*------------Baca & Tulis jarak-----------*/

void BacaJarak(Jarak *J);
/* I.S. : J tak terdefinisi * /
/* F.S. : J terdefinisi dan merupakan jarak valid */
/* Proses : mengulang baca komponen KM,MM,CM sehingga membentuk J
yang valid */

void TulisJarak(Jarak J);
/* I.S. : J sembarang */
/* F.S. : J ditulis ke layar dengan format KM:MM:CM */
/* Proses : Menulis ke layar */

/*----------Konversi terhadap type jarak----------*/

int KilometerToCentimeter (Jarak J);
/* Konversi kilometer menjadi centimeter */

Jarak CentimeterToKilometer(int N);
/* Konversi centimeter ke kilometer */
#endif
