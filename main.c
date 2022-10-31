#include <stdio.h>
#include <conio.h>

void main(){
    int kode,kelas;
    char tiket[40];
    long harga, total, bayar, kembali;
    float jumlah;

printf ("\n");
printf ("-------------  TIKET KONSER MUSIK -----------\n");
printf ("-------------  SOUNDS OF DOWNTOWN  -------------\n");
printf ("------------------------------------------------\n");
printf ("\n");
printf ("------------------------------------------------\n");
printf ("TIKET YANG TERSEDIA\n");
printf ("1. TOD \n");
printf ("2. SOD \n");
printf ("\n");
printf ("Pilih Jenis Tiket  : "); scanf ("%i",&kode);
printf ("------------------------------------------------\n");
printf ("\n");
printf ("------------------------------------------------\n");
printf ("PILIHAN KELAS TIKET (HARI DAN HARGA) \n");
printf ("1. TOD DAY 1           RP 200.000\n");
printf ("2. TOD DAY 2           RP 200.000\n");
printf ("3. TOD 2 DAYS PASS     RP 310.000\n");
printf ("4. SOD DAY 1           RP 330.000\n");
printf ("5. SOD DAY 2           RP 330.000\n");
printf ("6. SOD 2 DAYS PASS     RP 530.000\n");
printf ("\n");
printf ("Pilih Kategori Tiket : "); scanf ("%i",&kelas);
printf ("------------------------------------------------\n");
printf ("\n");

    if (kode == 1) {
        strcpy (tiket, "TOD");
            if (kelas == 1) harga = 200000;
                else if (kelas == 2) harga = 200000;
                else  harga = 310000;
    }

    if (kode == 2) {
        strcpy (tiket, "SOD");
            if (kelas == 4) harga = 330000;
                else if (kelas == 5) harga = 330000;
                else harga = 530000;

    }




printf ("\n");
printf ("-------------  TIKET KONSER MUSIK -----------\n");
printf ("-------------  SOUNDS OF DOWNTOWN  -------------\n");
printf ("------------------------------------------------\n");
printf ("\n");
printf ("Nama Tiket\t : %s\n" ,tiket);
printf ("Harga Tiket\t : %ld\n" ,harga);
printf ("Jumlah Tiket\t : ");
        scanf ("%f", &jumlah);
        total = harga * jumlah;
printf ("Total Bayar\t : %ld\n" ,total);
printf ("Bayar\t\t : ");
        scanf ("%ld",&bayar);
        kembali = bayar - total;
printf ("Uang kembali\t : %ld", kembali);
printf ("\n\n");
printf ("---------------   TERIMAKASIH   ----------------\n");
getch();
}
