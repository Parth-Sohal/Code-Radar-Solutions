#include<stdio.h>
#include<limits.h>
int main(){
    int n ;
    scanf("%d",&n);
    int arr[n];

    for(int i = 0 ; i < n  ; i++){
        scanf("%d",&arr[i]);
    }

    int ans = INT_MAX;
    int max = -1;
    for(int i = 0 ; i <  n ; i++){
        if(arr[i] == INT_MIN){
            continue;
        }
        int count = 1;
        for(int j = i+1 ; j < n ;j++){
            if(arr[j] == arr[i]){
                arr[j] = INT_MIN;
                count++;
            }
        }
        if((count > max)){
            max = count;
            ans = arr[i];
        }
        if(count == max){
            if(arr[i] < ans){
                ans = arr[i];
            }
        }
    }
    printf("%d",ans);
}