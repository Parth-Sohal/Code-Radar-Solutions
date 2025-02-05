#include <stdio.h>
#include<ctype.h>
int main() {
    char ch;
    scanf("%c",&ch);
    if(islower(ch)){
        printf("Lowercase");
    }
    else{
        printf("Uppercase");
    }
    return 0;
}