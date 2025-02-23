#include<stdio.h>
#include<limits.h>
#include<math.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
    }
    int max = -1;
    int min  = INT_MAX;
    for(int i = 0 ; i < n ;i++){
        if(arr[i] > max){
            min = max;
            max = arr[i];
        }
        else if(arr[i] > min && arr[i]!=max){
            min = arr[i];
        }
    }
    printf("%d",min);
}