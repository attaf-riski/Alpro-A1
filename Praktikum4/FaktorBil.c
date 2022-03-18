/*
Nama File : FaktorBil.c
Deskripsi : Mencari faktor-faktor suatu nilai integer
Pembuat : Attaf Riski Putra Ramadhan -- 24060121120005
Tanggal : 14 Maret 2022
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
	//KAMUS
	int i; // counter
	int N; // tampungan nilai yang akan dicari faktor-faktornya

	//ALGORITMA
	printf("Masukan nilai N : "); // minta nilai
	scanf("%d",&N);
	// dua kasus
	if(N>0)
	{
		printf("Faktor-faktor nilai %d : ",N);
		for(i = 1;i<=N;i++) // 1 -- N
		{
			//satu kasus
			if(N%i == 0) // jika N mod i == 0, i adl faktor N
			{
				printf("%d, ",i);
			}
		}	
	}
	else // nilai N tidak > 0
	{
		printf("N harus lebih dari 0");
	}
	

	return 0;
}
