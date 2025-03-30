#include <stdio.h>


int main() {
    int n;
    scanf("%d",&n);
    for(int i = 0 ; i < n ; i++){
        int a = 1;
        for(int space = 0 ; space < n-i-1 ; space++){
            printf(" ");
        }
        for(int j = 0 ; j <= i ;j++){
            printf("%d",a++);
        }
        a = a - 2;
        
        for(int k = i ; k > 0 ;k--){
            printf("%d",a--);
        }
        printf("\n");
    }
    return 0;
}