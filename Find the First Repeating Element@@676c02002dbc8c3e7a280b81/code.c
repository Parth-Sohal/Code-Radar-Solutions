#include<stdio.h>
void swap(int* ptr1 , int* ptr2){
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    return;

}

void printArray(int arr[],int n){
    for(int i = 0 ; i < n ; ++i){
        printf("%d ",arr[i]);
    }
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

    for(int i = 0 ; i < n ; ++i){
        scanf("%d",&arr[i]);
    }

    for(int i = 0 ; i < n ;i++){
        int cond = 0;
        for(int j = i+1 ;j<n;j++){
            if(arr[i] == arr[j]){
                cond = 1;
                printf("%d",arr[i]);
                break;
            }
        }
        if(cond){
            break;
        }
    }

}