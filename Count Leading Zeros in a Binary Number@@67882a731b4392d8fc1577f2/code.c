#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int i = 1;
    int k = 1;
    while(i<=n){
        i = i<<1;
        k+=1;
    }
    printf("%d",32-k);
    return 0;
}