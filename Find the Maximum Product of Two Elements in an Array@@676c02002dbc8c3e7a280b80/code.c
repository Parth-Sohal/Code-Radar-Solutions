#include<stdio.h>
#include<limits.h>
int abs(int num){
    if(num < 0) num = -(num);
    return num;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0 ;i < n ;i++){
        arr[i] = abs(arr[i]);
    }
    int min = INT_MIN;
    int secondMin = INT_MIN;
    for(int i = 0 ;i < n ;i++){
        if(arr[i] > (min)){
            secondMin = min;
            min = arr[i];
        }else if(arr[i]>(secondMin) ){
            secondMin = arr[i];
        }

    } 
    printf("%d",min*secondMin);
    return 0;
}