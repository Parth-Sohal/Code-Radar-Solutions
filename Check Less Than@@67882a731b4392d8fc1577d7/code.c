#include <stdio.h>

void check(int a,int b)
{
    if(a<b){
        printf("True");
    }
    else{
        printf("False");
    }
}
int main() {
    int a , b;
    scanf("%d%d",&a,&b);
    check(a,b);
    return 0;
}