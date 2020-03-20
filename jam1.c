/* File : jam.c */
/* Body AFT Jam*/

#include "jam.h"

/* Konstruktor Jam */
Jam MakeJam(int H, int M, int S, int D)

/* Mmebentuk Jam dari H, M, S yang valid */
{
	/*Kamus Lokal*/
	Jam J1;
	
	/* Algoritma */
	Hour(J1) = H;
	Minute(J1) = M;
	Second(J1) = S;
	Day(J1) = D;
	return J1;
}

/* Validator Jam */

boolean IsValid(int H, int M, int S, int D)
/* Mengirim true jika H,M,S dapat membentuk Jam yang valid */

{
	/* Kamus Lokal */
	/* Algoritma */
	return ((H >= 0 && H <= 23) &&
	(M >= 0 && M <= 59) &&
	(S >= 0 && S <= 59) && (D >= 1));
}

/* Baca dan Tulis Jam */
void BacaJam(Jam *J)
/* I.S : J tak terdefinisi */
/* F.S : J terdefinisi dan merupakan jam valid */
/* Proses : mengulang baca komponen H,M,S sehingga membentuk J yang  Valid */

{
	/* Kamus Lokal */
	int H, M, S, D;
	/* Algoritma */
	do  {
		 printf("Masukan Jumlah Hari : "); scanf("%d",&D);
		 printf("Masukan Jam : "); scanf("%d",&H);
		 printf("Masukan Menit: "); scanf("%d", &M);
		 printf("Masukan Detik: "); scanf("%d", &S);
		} while(!IsValid(H,M,S,D));
	*J = MakeJam(H,M,S,D);
}

void TulisHasil(Jam J)
/* I.S : J sembarang */
/* F.s : J ditulis ke layar dengan format HH:MM:SS */
/* Proses : Menulis ke layar */
{
	/* Kamus lokal */
	/* Algoritma */
	printf("Sisa Bagi Jam : %d, Hasil Bagi Menit : %d, Sisa Bagi Detik : %d ", Hour(J), Minute(J), Second(J));
}

void TulisJam(Jam J)
/* I.S : J sembarang */
/* F.s : J ditulis ke layar dengan format HH:MM:SS */
/* Proses : Menulis ke layar */
{
	/* Kamus lokal */
	/* Algoritma */
	printf("%d Hari, %d Jam, %d Menit, %d Detik",Day(J), Hour(J), Minute(J), Second(J));
}

int JamToDetik(Jam J)
/* Konversi Jam menjadi detik */
{
	/* Kamus Lokal */
	/* Algoritma */
	return(3600 *Hour(J) + 60 *Minute(J) + Second(J));
}

int HariToJam(Jam J)
/* Konversi Jam menjadi detik */
{
	/* Kamus Lokal */
	/* Algoritma */
	return(Day (J)*24 + Hour (J));
}

	
Jam DetikToJam(int N)
/* Konversi detik ke Jam */
{
	/* Kamus lokal */
	int sisa;
	Jam JOut;
	/* Algoritma */
	Hour(JOut) = N % 3600; // 7384 : 3600 Hasil 2 sisanya 184
	sisa = N % 3600;       
	Minute(JOut) = sisa / 60; // 184 : 60 Hasil 3 sisanya 4
	Second(JOut) = sisa % 60; 
	return JOut;
}
