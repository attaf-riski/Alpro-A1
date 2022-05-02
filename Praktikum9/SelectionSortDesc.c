/* 
Nama File : SelectionSortDesc.c
Deskripsi : Implementasi algoritma selection sort
Pembuat : Attaf Riski Putra Ramadhan -- 24060121120005
Tanggal : Senin, 3 Mei 2022
*/

#include <stdio.h>
#include "TabInt.h"


void SelectionSort(TabInt T)
{
    //Mengurut tabel integer dengan seleksi
    // I.S = T sembarang
    // F.S = T terurut secara desc 

    // KAMUS LOKAL
    int i,j, currentIndexMax, temp; // counter

    for(i = 1; i < T.N ; i++)
    {
        currentIndexMax = i;
        for(j = i+1;j <= T.N;j++)
        {
            if(T.T[j] > T.T[currentIndexMax])
            {
                currentIndexMax = j;
            }
        }

        // jika currentIndexMin engga sama dengan j maka tukar
        // currentIndexMin tidak berada di j
        // swap
        if (currentIndexMax != i)
        {
            temp = T.T[i];
            T.T[i] = T.T[currentIndexMax];
            T.T[currentIndexMax] = temp;
        }
    }
    //tampilkam array setelah sorting
    printf("\n\nInsertion Sort = ");
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
    SelectionSort(T);

    return 0;
}