#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);
    int post ;
    scanf("%d",&post);
    num = num >> post;
    printf("%d",(num&1));
    return 0;
}