/* 
Nama File : InsertionSortDesc.c
Deskripsi : Implementasi algoritma penyisipan
Pembuat : Attaf Riski Putra Ramadhan -- 24060121120005
Tanggal : Senin, 3 Mei 2022
*/

#include <stdio.h>
#include "TabInt.h"


void InsertionSort(TabInt T)
{
    //Mengurut tabel integer dengan penyisipan
    // I.S = T sembarang
    // F.S = T terurut secara desc 

    // KAMUS LOKAL
    int i,j, temp; // counter

    for(i = 1; i <= T.N ; i++)
    {
        j = i;
        // j > 1 agar indek ke-0 tidak dibandingkan
        // (T.T[j-1] < T.T[j])) agar desc
        while ((j > 1) && (T.T[j-1] < T.T[j])) 
        {
            temp = T.T[j];
            T.T[j] = T.T[j-1];
            T.T[j-1] = temp;
            j--;
        }
    }
    //tampilkam array setelah sorting
    printf("\n\n Insertion Sort = ");
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
    InsertionSort(T);

    return 0;
}