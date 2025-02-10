#include <stdio.h>


int main() {
    int n;
    scanf("%d",&n);
    for(int i = 0 ; i < n ;i++){
        for(int space = 0;space < n-i-1 ;space++){
            printf(" ");
        }
        for(int j = 1 ; j <= i+1 ;j++){
            printf("%d",j);
        }
        for(int k = i ; k>0 ;k--){
            printf("%d",k);
        }
        printf("\n");
    }
    return 0;
}