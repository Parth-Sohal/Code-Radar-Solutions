#include <stdio.h>


int main() {
    int n , k;
    scanf("%d%d",&n,&k);
    int result = n ^ (1<<0);
    printf("%d",result);
    return 0;
}