/* File : mjarak.c */
/* Program MainJarak */

/* Driver ADT Jarak */

#include "jarak.h"
#include "jarak.c"

int main()
{ 
  /* KAMUS */
   Jarak J1, J2;
  /* ALGORITMA */
   BacaJarak(&J1);
   printf("Jarak jalan: ");
   TulisJarak(J1); printf("\n");
   printf("Konversi menjadi centimeter: %d\n",KilometerToCentimeter(J1));
   J2 = CentimeterToKilometer(10000);
   printf("10000 centimeter sama dengan kilometer : ");
   TulisJarak(J2);
   return 0;
}
