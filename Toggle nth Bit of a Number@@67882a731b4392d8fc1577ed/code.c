#include <stdio.h>
int main() {
    int num,k;
    scanf("%d%d",&num,&k);
    printf("%d",(num^(1<<k)));
}