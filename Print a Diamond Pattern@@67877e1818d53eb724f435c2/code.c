#include <stdio.h>


int main() {
    int n;
    scanf("%d",&n);
    for(int i = 0 ; i < 2*n-1 ; i++){
        int row ;
        if(i<n) row = i;
        else row = 2*n-1 - i-1;
        for(int j = 0 ;j < n - row - 1 ;j++){
            printf(" ");
        }
        for(int k = 0 ;k < 2*row+1;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}