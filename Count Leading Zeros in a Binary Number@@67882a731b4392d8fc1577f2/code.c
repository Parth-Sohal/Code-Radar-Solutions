#include <stdio.h>
int main() {
    long int n;
    scanf("%ld",&n);
    long int k = 1,count=0;
    while(k<n){
        k = k<<1;
        count++;
    }
    printf("%ld",32-count);
    return 0;
}