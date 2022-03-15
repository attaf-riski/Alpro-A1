/*
Nama File : FaktorBil.c
Deskripsi : Mencari faktor-faktor suatu nilai integer
Pembuat : Attaf Riski Putra Ramadhan
Tanggal : 14 Maret 2022
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
	//kamus
	int i; // counter
	int N; // tampungan nilai

	//algoritma
	printf("Masukan nilai N : ");
	scanf("%d",&N);
	printf("Faktor-faktor nilai %d : ",N);
	for(int i = 1;i<=N;i++) // 1 -- N
	{
		//satu kasus
		if(N%i == 0) // jika N mod i == 0, i adl faktor N
		{
			printf("%d, ",i);
		}

	}

	return 0;
}