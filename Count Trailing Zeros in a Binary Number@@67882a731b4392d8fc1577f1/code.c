#include <stdio.h>

int main() {
    int n ;
    scanf("%d",&n);
    int i = 0;
    while((n & 1)!=1){
        n = n>>1;
        i++;
    }
    printf("%d",i);
    return 0;
}