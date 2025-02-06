#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int k = 1,count=0;
    while(k<n){
        k = k<<1;
        count++;
    }
    printf("%d",32-count-1);
    return 0;
}