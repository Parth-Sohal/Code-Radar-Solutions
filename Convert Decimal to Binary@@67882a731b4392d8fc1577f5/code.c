#include <stdio.h>

int main() {
    int n,power = 1;
    scanf("%d",&n);
    int result = 0;
    while(n){
        result = result + ((n&1)*power);
        power = power * 10;
        n = n>>1;
    }
    printf("%d",result);
    return 0;
}