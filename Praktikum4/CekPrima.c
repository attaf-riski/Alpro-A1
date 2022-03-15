/*
Nama File : CekPrima.c
Deskripsi : Cek suatu nilai integer apakah bilangan prima
Pembuat : Attaf Riski Putra Ramadhan
Tanggal : 14 Maret 2022
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
	//kamus
	int i; // counter
	int N; //tampungan nilai

	//algoritma
	printf("Masukan nilai N : ");
	scanf("%d",&N);

	for(i = 2;i<=N-1;i++)// 1 dan N pasti bisa membagi N
	{
		// satu kasus
		if (N % i == 0) // nilai i bukan 1 atau N
		{
			printf("%d adalah bukan bilangan prima",N);
			//program berhenti
			return 0;
		}
	}
	printf("%d adalah bilangan prima",N);
	return 0;
}