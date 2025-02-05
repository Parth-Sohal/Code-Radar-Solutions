#include <stdio.h>
char grade(int marks){
    if(marks>=90) return 'A';
    if(marks>=80)return  'B';
    if(marks >=70) return 'C';
    if(marks>=60) return 'D';
    return 'F';
}

int main() {
    int a;
    scanf("%d",&a);
    printf("%c",grade(a));
    return 0;
}