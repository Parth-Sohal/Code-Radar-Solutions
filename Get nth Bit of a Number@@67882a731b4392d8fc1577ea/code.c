#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);
    int i;
    scanf("%d",&i);
    int result = num>>i;
    printf("%d",result&1);
    return 0;
}