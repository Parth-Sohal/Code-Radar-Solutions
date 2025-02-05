#include <stdio.h>


int main() {
    int n , k;
    scanf("%d%d",&n,&k);
    printf("%d",(n ^ (1<<k)));
    return 0;
}