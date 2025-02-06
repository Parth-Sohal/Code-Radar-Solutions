#include <stdio.h>
int main() {
    long int n;
    scanf("%ld",&n);
    long int k = 1, count=0;
    while(k<n){
        count++;
        k = k<<1;
    }
    printf("%ld",31-count);
    return 0;
}