#include <stdio.h>
void lowest(int n){
    int k = 0;
    while(1){
        if(n & (1<<k) == 1){
            printf("%d",k);
            return;
        }
         k++;
    }
}
int main() {
    int n;
    scanf("%d",&n);
    lowest(n);
    return 0;
}