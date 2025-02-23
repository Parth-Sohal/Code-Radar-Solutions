#include <stdio.h>

int main() {
    long int n,power = 1;
    scanf("%d",&n);
    long int result = 0;
    while(n){
        result = result + ((n&1)*power);
        power = power * 10;
        n = n>>1;
    }
    printf("%ld",result);
    return 0;
}