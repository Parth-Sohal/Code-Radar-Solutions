#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
    }
    int min = INT_MAX;
    int secondMin = INT_MAX;
    for(int i = 0 ;i < n ;i++){
        if(arr[i] < min){
            secondMin = min;
            min = secondMin;
        }else if(arr[i]<secondMin && arr[i]!=min){
            secondMin = arr[i];
        }

    } 
    if(secondMin == INT_MAX){
        printf("%d",-1);
    }
    else printf("%d",secondMin);
    return 0;
}