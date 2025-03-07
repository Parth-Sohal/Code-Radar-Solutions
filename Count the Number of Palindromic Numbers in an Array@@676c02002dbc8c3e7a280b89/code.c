#include<stdio.h>
#include<limits.h>

int pallindrom(int n){
    int storedNum = n;
    int reverse = 0;
    while(n){
        int mod = n % 10;
        reverse = reverse*10 + mod;
        n = n/10;
    }
    if(storedNum == num){
        return true;
    }
    return false;
}

int main(){
    int n ;
    int val;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
    }
    int count = 0;
    for(int i = 0 ; i < n ; i++){
        if(pallindrom){
            count++;
        }
    }

    printf("%d",count);
}