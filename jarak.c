/* File : jarak.c */

/* Body ADT Jarak */

#include "jarak.h"

/* -----------konstruktor Jarak--------- */

Jarak MakeJarak(int KM, int MM, int CM)
/* Membentuk Jarak dari KM, MM, CM yg valid */
{ 
  /* Kamus Lokal */
   Jarak J1;
  /* Algoritma */
   Kilometer(J1) = KM;
   Meter(J1) = MM;
   Centimeter(J1) = CM;
   return J1;
}

/*------------validator Jarak------------*/

boolean IsJValid(int KM, int MM, int CM)
/* Mengirim true jika KM,MM,CM dapat membentuk Jarak yang valid */

{
  /* Kamus Lokal */
  /* Algoritma */
   return ((KM >= 0 && KM <= 9) && (MM >= 0 && MM <= 999) && (CM >= 0 && CM <= 99));
}

/*------------Baca & Tulis jarak-----------*/

void BacaJarak(Jarak *J)
/* I.S.   : J tak terdefinisi */
/* F.S.   : J terdefinisi dan merupakan jarak valid */
/* Proses : mengulang baca komponen KM,MM,CM sehingga membentuk J
             yang valid */
{
  /* Kamus Lokal */ 
   int KM, MM, CM;
  /* Algoritma */
   do {
       printf("Masukkan kilometer : ");scanf("%d",&KM);
       printf("Masukkan meter : ");scanf("%d",&MM);
       printf("Masukkan centimeter : ");scanf("%d",&CM);
      } while(!IsJValid(KM,MM,CM));
   *J = MakeJarak(KM,MM,CM);
}

void TulisJarak(Jarak J)
/* I.S. : J sembarang*/
/* F.S. : J ditulis ke layar dengan format KM:MM:CM */
/* Proses : Menulis ke layar */

{ 
  /* Kamus lokal */
  /* Algoritma */
   printf("%d:%d:%d",Kilometer(J),Meter(J),Centimeter(J));
}

int KilometerToCentimeter(Jarak J)
/* Konversi Kilometer menjadi centimeter */

{ 
  /* Kamus Lokal */
  /* Algoritma */
   return(100000 *Kilometer(J) + 1000 *Meter(J) + Centimeter(J));
}

Jarak CentimeterToKilometer(int N)
/* Konversi centimeter ke Kilometer */

{ 
  /* Kamus Lokal */
   int sisa;
   Jarak JOut;
  /* Algoritma */
   Kilometer(JOut) = N / 100000;
   sisa = N % 100000;
   Meter(JOut) = sisa / 1000;
   Centimeter(JOut) = sisa % 100;
   return JOut;
}
