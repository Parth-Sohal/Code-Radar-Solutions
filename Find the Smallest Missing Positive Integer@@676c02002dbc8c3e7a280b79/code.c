#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0 ; i < n ; i++){
        scanf("%d",&arr[i]);
    }

    int result[n+1] = {0};

    for(int i = 0 ; i < n ; i++){
        if(arr[i] > 0 && arr[i] <= n+1){
            result[arr[i]] = arr[i];
        }
    }
    int ans = -1;
    for(int i = 1 ; i < n+1 ; i++){
        if(result[i] == 0){
            ans = i;
            break;
        }
    }
    printf("%d",ans);
}