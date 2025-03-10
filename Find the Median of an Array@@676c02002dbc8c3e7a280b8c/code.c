#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i < n ;i++){
        scanf("%d",&arr[i]);
    }
    if(n%2!=0){
        printf("%d",arr[n/2]);
    }
    else{
        int ans = (arr[n/2]+arr[(n-1)/2])/2;
        printf("%d",ans);
    }
    return 0;
}