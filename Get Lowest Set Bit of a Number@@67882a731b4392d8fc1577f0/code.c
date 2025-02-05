#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int k = 1;
    while(1){
        if(n<<k){
            printf("%d",k);
            break;
        }
        k++;
    }
    return 0;
}