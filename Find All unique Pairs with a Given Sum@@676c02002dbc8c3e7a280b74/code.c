#include<stdio.h>
#include<limits.h>

int main(){
    int n ;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
    }
    int target ;
    scanf("%d",&target);

    int result[n*n][2];
    int k = 0;
    int count = 0;

    for(int i= 0 ; i < n ; i++){
        for(int j = i+1 ; j < n ;j++){
            if(arr[i]+arr[j]==target){
                result[k][0] = arr[i];
                result[k][1] = arr[j];
                count++;
                k++;
            }
        }
    }

    for(int i = 0 ; i < count ;i++){
        for(int j = 0 ; j < 2 ;j++){
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }


    return 0;
}