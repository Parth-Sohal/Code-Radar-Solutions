#include <stdio.h>
int main() {
    int a,b;
    char ch;
    scanf("%d %d",&a,&b);
    scanf(" %c",&ch);
    switch(ch){
        case '+':
            printf("%d",a+b);
            break;
        case '-':
            printf("%d",a-b);
            break;
        case '*':
            printf("%d",a*b);
            break;
        case '/':
            if(b==0){
                printf("Error");
            }
            else{
            printf("%d",a/b);
            }
            break;
        default :
            printf("Error");
            break;
    }
    return 0;
}