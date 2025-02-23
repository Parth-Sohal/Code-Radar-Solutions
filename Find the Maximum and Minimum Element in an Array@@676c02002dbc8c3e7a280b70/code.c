#include<stdio.h>
#include<limits.h>
#include<math.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i  < n ; i++){
        scanf("%d",&arr[i]);
    }
    int min = INT_MAX;
    int max = INT_MIN;
    for(int i = 0 ; i < n ; i++){
        if(arr[i] > max){
            max =  arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }
    printf("%d %d",min,max);
}