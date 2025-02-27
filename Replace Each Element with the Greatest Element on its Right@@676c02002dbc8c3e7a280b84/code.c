#include<stdio.h>
#include<limits.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
    }
    
    for(int i = 0 ;  i < n ;i++){
        int max = -1;
        for(int j = i+1 ; j < n ;j++ ){
            if(arr[i]>max){
                max = arr[i];
            }
            arr[i] = max;
        }
    }
    for(int i = 0 ; i < n ; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}