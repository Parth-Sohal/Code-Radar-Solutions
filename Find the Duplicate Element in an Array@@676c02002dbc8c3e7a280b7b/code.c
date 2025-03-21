#include<stdio.h>

int abs(int n){
    if(n) > 0 return n;
    return -1*(n);
}

int main(){
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i = 0 ;i <  n ; i++){
        scanf("%d",&arr[i]);
    }

    // -ve marking index
    int ans = -1;

    for(int i = 0 ; i < n ;i++){
        int index = arr[i];
        if(arr[abs(index)] < 0){
            ans = arr[i];
            break;
        }
        else{
            arr[abs(index)] = -1 * arr[abs(index)];
        }
    }

    printf("%d",ans);
    return 0;
}