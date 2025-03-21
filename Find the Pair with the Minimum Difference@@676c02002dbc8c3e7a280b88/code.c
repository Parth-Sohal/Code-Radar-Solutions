#include<stdio.h>
#include<limits.h>
void swap(int* ptr1 , int* ptr2){
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    return;

}


void selectionSort(int arr[],int n){
    for(int i = 0 ; i < n - 1 ;i++){
        int min = i;
        for(int j = i+1 ; j < n ;j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        swap(&arr[i],&arr[min]);
    }
}


int main(){
    int n;
    scanf("%d",&n);
    int arr[n];

    for(int i = 0 ; i < n  ;i++){
        scanf("%d",&arr[i]);
    }

    selectionSort(arr,n);

    int fst = -1;
    int last = -1;

    int min = INT_MAX;

    for(int i = 1; i < n ;i++)
    {
        int current = arr[i] - arr[i-1];
        if(current < min){
            fst = arr[i-1];
            last = arr[i];
        }
    }

    printf("%d %d",fst,last);

}