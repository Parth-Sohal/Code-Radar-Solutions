#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
    }
    // algo - 
    int element , count = 0;
    for(int i = 0 ; i < n ;i++){
        if(count == 0){
            element = arr[i];
        }
        if(element == arr[i]){
            count++;
        }
        else if(element != arr[i]){
            count--;
        }
    }

    int res = 0;
    for(int i = 0 ; i < n ;i++){
        if(element == arr[i]){
            res++;
        }
    }

    if(res > n/2){
        printf("%d",element);
    }
    else{
        printf("-1");
    }
    

}