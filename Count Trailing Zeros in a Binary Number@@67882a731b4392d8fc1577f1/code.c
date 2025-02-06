#include <stdio.h>

int main() {
    int n ;
    scanf("%d",&n);
    int i = 0;
    while(1){
        if((n>>i)){
            i++;
            continue;
        }
        else{
            printf("%d",i-1);
            break;
        }
    }
    return 0;
}