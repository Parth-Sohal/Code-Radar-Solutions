#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int i = 0;
    int result = 0;
    int k = 1;
    while(k<n){
        if((n & k)!=0){
            result = i; 
            break;
        }
        i++;
        k<<i;
    }
    printf("%d",i);
    return 0;
}