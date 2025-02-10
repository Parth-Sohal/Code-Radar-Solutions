#include <stdio.h>

int main() {
    int n;
    sacnf("%d",&n);
    for(int i = 0 ;i < n ;i++){
        char ch = 'A';
        for(int j = 0 ;j < i+1 ;j++){
            printf("%c ",ch++);
        }
        printf("\n");
    }
    return 0;
}