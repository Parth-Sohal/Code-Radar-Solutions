#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int result = 0;
    while(n!=0){
        result = (result*10) + n%2;
        n = n/2;
    }
    printf("%d",result);
    return 0;
}