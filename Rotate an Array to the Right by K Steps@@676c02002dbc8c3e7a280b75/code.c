#include<stdio.h>
void swap(int* ptr1 , int* ptr2){
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}
void reverse(int arr[],int i , int j){
    while(i<j){
        swap(&arr[i++],&arr[j--]);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i  < n ; i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    k = k %n;
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    for(int i = 0 ; i  < n ; i++){
        printf("%d ",arr[i]);
    }

}