#include<stdio.h>

void swap(int* ptr1 , int* ptr2){
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    return;

}

void printArray(int arr[] , int n){
    for(int i = 0 ; i < n ; i++){
        printf("%d ",arr[i]);
    }
}
void bubbleSort(int arr[] ,int n){
    for(int i = 0 ; i < n-1 ;i++){
        int e = 0;
        for(int j = e+1 ; j < n - i ; j++){
            if(arr[e] > arr[j]){
                swap(&arr[e],&arr[j+1]);
            }
            e++;
        }
    }
    // printArray(arr,n);
}