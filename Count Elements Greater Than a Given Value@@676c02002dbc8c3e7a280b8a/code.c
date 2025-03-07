#include<stdio.h>
#include<limits.h>

int main(){
    int n ;
    int val;
    scanf("%d",&n,&val);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
    }
    int count = 0;
    for(int i = 0 ;i < n ;i++){
        if(arr[i] > val){
            count++;
        }
    }
    
}