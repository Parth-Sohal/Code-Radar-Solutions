#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
    }
    int min = INT_MIN;
    int secondMin = INT_MIN;
    for(int i = 0 ;i < n ;i++){
        if(arr[i] > min){
            secondMin = min;
            min = arr[i];
        }else if(arr[i]>secondMin && arr[i]!=min){
            secondMin = arr[i];
        }

    } 
    if(secondMin == INT_MIN){
        printf("%d",-1);
    }
    else printf("%d",secondMin);
    return 0;
}