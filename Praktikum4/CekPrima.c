/*
Nama File : CekPrima.c
Deskripsi : Cek suatu nilai integer apakah bilangan prima
Pembuat : Attaf Riski Putra Ramadhan -- 24060121120005
Tanggal : 19 Maret 2022
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
	//KAMUS
	int i; // counter
	int jumlahFaktor; // jumlah faktor N
	int N; //tampungan nilai

	//ALGORITMA
	printf("Masukan nilai N : ");
	scanf("%d",&N);
	jumlahFaktor = 0; //jumlah faktor awal

	// dua kasus
	if (N > 0 && N!=1)
	{
		jumlahFaktor = 2; // 1 dan N sudah pasti faktor N
		for(i = 2;i<=N-1;i++)// 1 dan N pasti bisa membagi N
		{
			// satu kasus
			if (N % i == 0) // ada faktor lain
			{
				jumlahFaktor += 1;

		    }
	    }


	    if (jumlahFaktor == 2)
	    {
	    	printf("%d bilangan prima",N);
	    }
	    else // faktor N lebih dari 2 jumlahnya
	    {
	    	printf("%d bukan bilangan prima",N);
	    }

	}
	else // N tidak memenuhi syarat > 0 atau N = 1
	{
		printf("%d bukan bilangan prima",N);
	}
	return 0;
}
