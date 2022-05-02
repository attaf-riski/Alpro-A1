/* 
Nama File : CountingSortDesc.c
Deskripsi : Implementasi algoritma counting sort
Pembuat : Attaf Riski Putra Ramadhan -- 24060121120005
Tanggal : Sabtu, 30 April 2022
*/

#include <stdio.h>
#include "TabInt.h"


int valMaxArr(TabInt T)
{
// Mencari nilai maksimal dalam sebuah array
	// KAMUS LOKAL
	int bufferMax;
	int i; //counter
	
	// ALGORITMA
	bufferMax = 0; // inisialisasi
	for(i = 1; i <= T.N;i++)
	{
		if(bufferMax < T.T[i])
		{
			bufferMax = T.T[i];
		}
	}
	return bufferMax;
}

void CountSort(TabInt T)
{
	//Mengurut tabel integer dengan pencacahan
	// I.S = T sembarang
	// F.S = T terurut secara desc 

	// KAMUS LOKAL
	int i,j; // counter
	int currentIndex; // indeks terkini
	const int max = valMaxArr(T);
	int TabCount[max]; //panjang tabcount = nilai tertinggi dalam sebuah array



	// ALGORITMA
	// isi TabCount dengan 0 semua dahulu
	for (i = 0; i<max+1; i++) // Tabcount bisa handle hingga panjanga max karena indek max+1
	{
		TabCount[i] = 0;
	}

	// isi TabCount
	for (i = 1; i<=T.N;i++)
	{
		TabCount[T.T[i]] = TabCount[T.T[i]] + 1;
	}
	// desc
	currentIndex = 1;

	printf("\n\nCounting Sort = ");
	for(i = max; i > 0; i--)
	{
		if(TabCount[i] < max)
		{
			for(j = 0; j < TabCount[i];j++)
			{
				T.T[currentIndex] = i;	
				currentIndex++;
			}
		}
	}

	TampilkanArray(T);

}

int main ()
{
	// KAMUS
	TabInt T; // TabInt
	int N; // indeks efektif
	int isiArray[] = {57,87,1,7,7,50,110,30,20,70};

	// ALGORITMA
	T.N = 10; // setting index efektif
	IsiArray(&T,isiArray);
	TampilkanArray(T);
	CountSort(T);

	return 0;
}