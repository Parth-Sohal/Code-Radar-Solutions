#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);
    if(num == 1 || num == 3 || num == 5 || num == 7 || num == 8 || num == 10 || num ==12){
        printf("%d",1);
    }
    else if(num == 2){
        printf("28");
    }
    else if(num == 4 || num == 6 || num == 9 || num ==11){
        printf("30");
    }
    else{
        printf("Invalid month");
    }
    return 0;
}