//Nama File         : CekSegitiga.c
//Deskripsi         : Membuat program untuk menentukan jenis segitiga dari masukan 3 sisi
//Pembuat           : Rachmad Rifa'i - 24060122120014
//Tanggal Pembuatan : Selasa, 28 Februari 2023, 17:19

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus
    int s1, s2, s3;

    //Algoritma
    printf("Masukkan Sisi 1 : ");
    scanf("%d",&s1);
    printf("Masukkan Sisi 2 : ");
    scanf("%d",&s2);
    printf("Masukkan Sisi 3 : ");
    scanf("%d",&s3);
    printf("\n");

    if (s1 >= 0 && s2 >= 0 && s3 >= 0){
        if (s1 == s2 && s1==s3){
            printf("Segitiga Sama Sisi");
        }else if (s1 == s2 || s1 == s3){
            if (s1 != s2 || s1 != s3){
                printf("Segitiga Sama Kaki");
            }
        }else{
                printf("Segitiga Sembarang");
            }
    }else{
        printf("Terdapat nilai yang bukan sisi segitiga");
    }
    printf("\n");
    return 0;
}
