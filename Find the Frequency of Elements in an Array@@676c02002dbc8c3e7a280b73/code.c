#include<stdio.h>
#include<limits.h>
// #include<math.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
    }

    for(int i = 0 ; i < n ;i++){
        int element = arr[i];
        int count = 1;
        if(arr[i] == INT_MAX){
            continue;
        }
        else{ 
            for(int j = i+1 ;j < n; j++){
                
                if(arr[j] == element){
                    arr[j] = INT_MAX;
                    count++;
                }   
            }
            printf("%d %d\n",element, count);
        }
    }  
}