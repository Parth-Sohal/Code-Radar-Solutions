#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    a = (a>>30);
    if(a){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}