/*
Nama File : CekHari.c
Deskripsi : Merepresentasikan suatu nilai antara 1 -- 7 menjadi nama hari
Pembuat : Attaf Riski Putra Ramadhan -- 24060121120005
Tanggal : Rabu, 9 Maret 2022 
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	// Kamus
	int masukanKeyboard; // menampung masukan keyboard untuk antara 1 - 7

	// Algoritma
	printf("Masukan angka yang ingin dirubah ke nama hari (1 - 7) : ");
	//{ inisialisasi dengan meminta user nilai 1 – 7}
	scanf("%d",&masukanKeyboard);

	if (0 < masukanKeyboard && masukanKeyboard <= 7 )
	{
		switch (masukanKeyboard) // { cek isi masukanKeyboard } 
		{
			case 1:
				printf("Senin");
				break;
			case 2:
				printf("Selasa");
				break;
			case 3:
				printf("Rabu");
				break;
			case 4:
				printf("Kamis");
				break;
			case 5:
				printf("Jum'at");
				break;
			case 6:
				printf("Sabtu");
				break;
			default: // 7
				printf("Ahad");
		}
	}
	else // { masukanKeyboard bukan antara 1 - 7 }
	{
		printf("Masukan nomor hari tidak tepat");
	}

	return 0;
}
