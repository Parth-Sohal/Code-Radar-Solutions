#include<stdio.h>
#include<limits.h>

int main(){
    int n ;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
    }

    int max = INT_MIN;

    for(int i = 0 ; i < n ; i++){
        if((arr[i] & 1) == 0){
            if(arr[i] > max){
                max = arr[i];
            }
        }
    }

    printf("%d",min);
}