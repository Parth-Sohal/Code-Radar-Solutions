#include <stdio.h>
int peak(int arr[],int n){
    for(int i = 0 ; i < n ;i++){
        if(i==0) {
            if(arr[i]>arr[i+1]) return arr[i];
        }
        if(arr[i-1]<arr[i]&&arr[i]>arr[i+1]){
            return arr[i];
        }
        if(i==n-1){
            if(arr[i]>arr[i-1]){
                return arr[i];
            }
        }
    }
    return -1;

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