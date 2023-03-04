//Nama File         : luasKellLayang.c
//Deskripsi         : Membuat program untuk menghitung luas dan keliling layang-layang
//Tanggal Pembuatan : Rabu, 22 Februari 2023, 15:57

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    //Kamus
    float s1, s2, d1, d2, Luas, Kell;

    //Algoritma
    printf("Sisi satu layang-layang = ");
    scanf("%f", &s1);
    printf("Sisi dua layang-layang = ");
    scanf("%f", &s2);
    printf("Diagonal satu layang-layang = ");
    scanf("%f", &d1);
    printf("Diagonal dua layang-layang = ");
    scanf("%f", &d2);

    Luas = 0.5 * d1 * d2;
    Kell = 2 * (s1 + s2);

    printf("\nLuas = %f",Luas);
    printf("\nKeliling = %f \n",Kell);
    return 0;
}
