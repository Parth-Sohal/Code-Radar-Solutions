#include<math.h>
#include<limits.h>
#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i= 0 ; i < n ;i++){
        scanf("%d",&arr[i]);
    }

    for(int i = 0  ; i < n ; i++){
        int cond = 1;
        for(int j = i+1;j<n;j++){
            if(arr[i] < arr[j]){
                cond  =  0;
            }
        }
        if(cond){
            printf("%d ",arr[i]);
        }
    }
}