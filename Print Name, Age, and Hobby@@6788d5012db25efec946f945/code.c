#include <stdio.h>


int main() {
    char str[30];
    int age;
    char str2[30];
    scanf("%s",str);
    scanf("%d",&age);
    scanf("%s",str2);
    printf("Name: %s\nAge: %d\nHobby: %s",str,age,str2);
    return 0;
}