#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    int flag = 0;
    for(int i = 1 ; i < a/2 ;i++){
        if(i*i == a){
            flag = 1;
            break;
        }
    }
    if(flag){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}