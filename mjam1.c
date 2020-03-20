/* File : mjam.c */
/* memanfaatkan primitif jam */
#include "jam.h"
#include "jam.c"

int main()
{/* KAMUS */
	Jam J1;
	Jam J2;
	int dt=3600;

/* PROGRAM */
	printf("=================================\n");
	printf ("Konversi Jumlah Hari dan Waktu");
	printf("\n=================================\n");
	BacaJam (&J1);
	printf("=================================\n");
	TulisJam (J1);
	printf("\n=================================\n");
	printf("\nKonversi jam ke detik: %d", JamToDetik(J1));
	printf(" detik\n");
	printf("\n=================================\n");
	printf("\nKonversi Hari ke Jam: %d", HariToJam(J1));
	printf(" jam\n");
	printf("\n=================================\n");
	dt = JamToDetik(J1);
	J2=DetikToJam(dt);
	TulisHasil(J2);
return 0;
}
