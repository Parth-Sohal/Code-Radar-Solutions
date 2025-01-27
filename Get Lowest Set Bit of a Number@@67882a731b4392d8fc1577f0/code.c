#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int k = 0;
    int power = 1;
    while(1){
        if((n)&(1<<k)==power){
            printf("%d",k);
        }
        k++;
        power = power*2;
    }
    return 0;
}