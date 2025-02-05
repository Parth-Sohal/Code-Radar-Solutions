#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int i = 0,k=1;
    while(){
        if(n & k){
            printf("%d",i);
            break;
        }
        i++;
        k<<i;
    }
    return 0;
}