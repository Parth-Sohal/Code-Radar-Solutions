#include<stdio.h>
int prime(int num){
    for(int i = 2 ; i*i < num ;i++){
        if(num%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
    }
    int count = 0;
    for(int i = 0 ; i < n ;i++){
        if(prime(arr[i])){
            count++;
        }
    }
    printf("%d",count);
    
    return 0;
}