#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int result = 0;
    while(n!=0){
        result = result +  (n&1);
        // result = result << 1;
        n = n>>1;
    }
    printf("%d",result);
    return 0;
}