#include <stdio.h>
int peak(int arr[],int n){
    for(int i = 1 ; i < n ;i++){
        if(arr[i-1]<arr[i]&&arr[i]>arr[i+1]){
            return arr[i];
        }
    }
    return arr[0];
}

int main() {
    int n ;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int peaak = peak(arr,n);
    printf("%d",peaak);
    return 0;
}