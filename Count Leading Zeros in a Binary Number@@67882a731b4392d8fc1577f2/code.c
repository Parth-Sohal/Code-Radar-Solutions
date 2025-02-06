#include <stdio.h>
int main() {
    long long int n;
    scanf("%lld",&n);
    long long int k = 1,count=0;
    while(k<n){
        k = k<<1;
        count++;
    }
    printf("%lld",31-count);
    return 0;
}