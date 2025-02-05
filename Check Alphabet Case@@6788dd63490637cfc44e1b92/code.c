#include <stdio.h>
#include<ctype.h>
int main() {
    char ch;
    scanf("%c",&ch);
    if(islower(ch)){
        printf("Lowercase");
    }
    else if(isupper(ch)){
        printf("Uppercase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}