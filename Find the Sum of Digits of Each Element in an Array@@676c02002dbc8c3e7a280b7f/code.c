#include<stdio.h>
int sumDigit(int num){
    int ans = 0;
    while(num){
        ans = ans + (num%10);
        num = num/10;
    }
    return ans;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0 ;i < n ;i++){
        printf("%d ",sumDigit(arr[i]));
    }
      
    return 0;
}