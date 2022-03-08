/*
Nama File : CekBulan.c
Deskripsi : Merepresentasikan suatu nilai antara 1 -- 12 menjadi nama bulan
Pembuat : Attaf Riski Putra Ramadhan -- 24060121120005
Tanggal : Rabu, 9 Maret 2022 
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	// Kamus
	int masukanKeyboard; // menampung masukan keyboard untuk antara 1 - 12

	// Algoritma
	printf("Masukan angka yang ingin dirubah ke nama bulan (1 - 12) : ");
	// { inisialisasi dengan meminta user nilai 1 – 12}
	scanf("%d",&masukanKeyboard);

	if (0 < masukanKeyboard && masukanKeyboard <= 12 )
	{
		switch (masukanKeyboard) // { cek isi masukanKeyboard } 
		{
			case 1:
				printf("Januari");
				break;
			case 2:
				printf("Februari");
				break;
			case 3:
				printf("Maret");
				break;
			case 4:
				printf("April");
				break;
			case 5:
				printf("Mei");
				break;
			case 6:
				printf("Juni");
				break;
			case 7:
				printf("Juli");
				break;
			case 8:
				printf("Agustus");
				break;
			case 9:
				printf("September");
				break;
			case 10:
				printf("Oktober");
				break;
			case 11:
				printf("November");
				break;
			default: // 12
				printf("Desember");
		}
	}
	else //{ masukanKeyboard bukan antara 1 - 12 }
	{
		printf("Masukan nomor bulan tidak tepat");
	}

	return 0;
}
