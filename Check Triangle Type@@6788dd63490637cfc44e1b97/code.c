#include <stdio.h>

int main() {
    int a,b,c;
    Scanf("%d%d%d",&a,&b,&c);
    if((a+b>c) && (b+c>a) && (a+c>b)){
        if(a==b==c){
            printf("Equilateral");
        }
        else if((a==b) || (a==c) || (b==c)){
            printf("Isosceles");
        }
        else{
            printf("Scalene");
        }
    }
    else{
        printf("Not a Valid Traingle");
    }
    return 0;
}