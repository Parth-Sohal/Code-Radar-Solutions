#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int k = 0;
    int power = 1;
    while(1<<k <= n){
        if(n&(1<<k)){
            printf("%d",k);
            break;
        }
        k++;
    }
    return 0;
}