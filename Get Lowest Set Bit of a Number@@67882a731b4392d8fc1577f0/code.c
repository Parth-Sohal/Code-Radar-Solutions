#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int k = 1;
    while(k<n){
        if(n & k){
            printf("%d",k);
            break;
        }
        k<<1;
    }
    return 0;
}