#include <stdio.h>

int main() {
    // printf("%s", welcome());
    int n , i;
    scanf("%d%d",&n,&i);
    printf("%d",((n)|(1<<i)));
    return 0;
}