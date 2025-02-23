#include<stdio.h>
void swap(int* ptr1 , int* ptr2){
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
    }
    int i = 0;
    int j = 0;
    while(j< n){
        if(arr[i]!=0){
            i++;
        }
        else if(arr[i]==0){
            swap(&arr[i],&arr[j]);
            j++;
            i++;
        }
    } 
    for(int i = 0 ; i < n ; i++){
        printf("%d ",arr[i]);
    }   
    return 0;
}