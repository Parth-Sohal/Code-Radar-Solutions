#include <stdio.h>


int main() {
    int n;
    scanf("%d",&n);
    for(int i = 0 ; i < n ; i++){
        for(int space = 0 ; space < n-i-1 ;space++){
            printf(" ");
        }
        for(int j = 1 ; j <= 2*i+1 ;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}