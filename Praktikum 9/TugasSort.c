//Nama File         : TugasSort.c
//Deskripsi         : Membuat program untuk sorting array
//Pembuat           : Rachmad Rifa'i - 24060122120014
//Tanggal Pembuatan : Jum'at, 19 Mei 2023, 19:01

#include <stdio.h>
#include <stdlib.h>

void BubbleSort(int arr[], int n) {
    //Kamus
    int i;
    int j;
    int temp;

    //Algoritma
    for(i = 0; i < n-1; i++){
        for(j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

}

int findMax(int arr[], int n){
    //Kamus
    int i;
    int max = arr[0];

    //Algoritma
    for (i = 1; i < n; i++){
        if (arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

void CountingSort(int arr[], int n){
    int i;
    int max = findMax(arr, n);

    int* count = (int*)malloc((max + 1) * sizeof(int));

    for (i = 0; i <= max; i++){
        count[i] = 0;
    }
    for (i = 0; i < n; i++){
        count[arr[i]]++;
    }
    for (i = 1; i <= max; i++){
        count[i] += count[i - 1];
    }

    int* sortedArray = (int*)malloc(n * sizeof(int));

    for (i = n - 1; i >= 0; i--){
        sortedArray[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }
    for (i = 0; i < n; i++){
        arr[i] = sortedArray[i];
    }
    free(count);
    free(sortedArray);
}

void InsertionSort(int arr[], int n){
    //Kamus
    int i;
    int temp;
    int j;

    //Algoritma
    for(i=1;i<n;i++){
        temp = arr[i]; //Memilih elemen array
        j = i - 1;
        while(j>=0 && arr[j] > temp){ //Melakukan perbandingan
            arr[j+1] = arr[j];
            j = j - 1;
        }
        arr[j+1] = temp;
    }
}

void SelectionSort(int arr[], int n){
    int i;
    int j;
    int min;
    int temp;

    //Algoritma
    for(i=0;i<n;i++){
        min = i; // inisiasi nilai min
        for(j=i+1;j<n;j++){ //iterasi mencari nilai terkecil
            if(arr[j] < arr[min]){ //perbandingan
                min = j;
            }
        }
        //perbandingan
        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}

void PrintArray(int arr[], int n){
    int i;
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
}

int main()
{
    //Kamus
    int n;
    int i;
    char pilSort;

    //Algoritma
    printf("============= PROGRAM SORTING ==============");
    printf("\nMasukkan panjang array : ");
    scanf("%d", &n);
    printf("Masukkan arraynya : \n");
    int arr[n];
    for (i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Array yang belum terurut : ");
    PrintArray(arr, n);

    printf("\nPilih sort yang digunakan : ");
    scanf(" %c", &pilSort);

    //printf("\nArray yang sudah terurut : ");
    switch(pilSort){
        case 'a':
            printf("Sorting yang digunakan adalah Bubble Sort");
            BubbleSort(arr, n);
            break;
        case 'b':
            printf("Sorting yang digunakan adalah Counting Sort");
            CountingSort(arr, n);
            break;
        case 'c':
            printf("Sorting yang digunakan adalah Insertion Sort");
            InsertionSort(arr, n);
            break;
        case 'd':
            printf("Sorting yang digunakan adalah Selection Sort");
            SelectionSort(arr, n);
            break;
        default:
            printf("Tidak ada sorting yang digunakan.");
    }

    printf("\nArray yang sudah terurut : ");
    PrintArray(arr, n);

    return 0;
}

