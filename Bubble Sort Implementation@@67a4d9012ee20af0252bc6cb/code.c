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
    
    for(int i = 0 ; i < n - 1 ; i++){ // n-1 bcs after n-1 iteration the smallest will be at first
        for(int j = 0 ; j < n - 1 - i ;j++){
            if(arr[j] > arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
    
}