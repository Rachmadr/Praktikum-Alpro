//#include <stdio.h>
//#include <stdlib.h>
//
//void InsertionSort(int arr[], int n){
//    //Kamus
//    int i;
//    int temp;
//    int j;
//
//    //Algoritma
//    for(i=1;i<n;i++){
//        temp = arr[i]; //Memilih elemen array
//        j = i - 1;
//        while(j>=0 && arr[j] > temp){ //Melakukan perbandingan
//            arr[j+1] = arr[j];
//            j = j - 1;
//        }
//        arr[j+1] = temp;
//    }
//}
//
//void SelectionSort(int arr[], int n){
//    int i;
//    int j;
//    int min;
//    int temp;
//
//    //Algoritma
//    for(i=0;i<n;i++){
//        min = i; // inisiasi nilai min
//        for(j=i+1;j<n;j++){ //iterasi mencari nilai terkecil
//            if(arr[j] < arr[min]){ //perbandingan
//                min = j;
//            }
//        }
//        //perbandingan
//        temp = arr[min];
//        arr[min] = arr[i];
//        arr[i] = temp;
//    }
//}
//
//int PrintArray(int arr[], int n){
//    int i;
//    for(i=0;i<n;i++){
//        printf("%d ", arr[i]);
//    }
//}
//
//int main()
//{
//    //Kamus
//    int n;
//    int arr[] = {29,10,14,37,14,8,44,32};
//    int i;
//
//    //Algoritma
//    n = 8;
//
//    printf("Array sebelum diurutkan : \n");
//    PrintArray(arr,n);
//
//    InsertionSort(arr,n);
//    SelectionSort(arr,n);
//
//    printf("\nArray setelah diurutkan : \n");
//    PrintArray(arr,n);
//
//
//    return 0;
//}
