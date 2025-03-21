#include<stdio.h>

void swap(int* ptr1 , int* ptr2){
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    return;
}

int main(){
    int n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
    }
    

    // bubble sort

    for(int i = 0 ; i < n-1 ;i++){
        for(int j = 0 ; j < n - i - 1 ; j++){
            if(arr[j] > arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }

    for(int i = 0 ; i < n ; i++){
        printf("%d ",arr[i]);
    }


}