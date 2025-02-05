#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int i = 0;
    while(1){
        if((n>>i)&1 == 1){
            printf("%d",31-i);
            break;
        }
        i++;
    }
    return 0;
}