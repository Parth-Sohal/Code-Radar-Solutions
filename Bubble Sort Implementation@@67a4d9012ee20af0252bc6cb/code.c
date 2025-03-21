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
        for(int j = 0 ; j < n - i - 1 ; j++){
            if(arr[j] > arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
    // printArray(arr,n);
}