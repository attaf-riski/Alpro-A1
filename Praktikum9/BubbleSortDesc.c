/* 
Nama File : BubbleSortDesc.c
Deskripsi : Implementasi algoritma bubble sort
Pembuat : Attaf Riski Putra Ramadhan -- 24060121120005
Tanggal : Senin, 2 Mei 2022
*/

#include <stdio.h>
#include "TabInt.h"


void BubbleSort(TabInt T)
{
    //Mengurut tabel integer dengan buble
    // I.S = T sembarang
    // F.S = T terurut secara desc 

    // KAMUS LOKAL
    int i,j, temp; // counter

    for(i = 0; i < T.N ; i++)
    {
        for(j = 1; j <= T.N - i  ; j++)
        {
            if(T.T[j] < T.T[j+1])
            {
                temp = T.T[j+1];
                T.T[j+1] = T.T[j];
                T.T[j] = temp;
            }
        }      
    }
    //tampilkam array setelah sorting
    printf("\n\nBubble Sort = ");
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
    BubbleSort(T);

    return 0;
}