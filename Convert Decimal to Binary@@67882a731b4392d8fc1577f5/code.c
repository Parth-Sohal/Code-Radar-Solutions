#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int result = 0;
    while(n!=0){
        result = (result*10) + (n&1);
        n = n>>1;
    }
    printf("%d",result);
    return 0;
}