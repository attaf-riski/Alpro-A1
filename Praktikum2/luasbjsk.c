/*
Nama File : luasbjsk.c
Deskripsi : Mencari luas bujur sangkar dari masukan
Pembuat : Attaf Riski Putra Ramadhan -- 24060121120005
Tanggal : Selasa, 1 Maret 2022 -- 15:35 WIB
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{

	// kamus
	int S;
	int Luas;

	// Algoritma
	printf("Masukan sisi bujursangkar : ");
	scanf("%d", &S);
	Luas = S * S;
	printf("%d",Luas);

	return 0;
}