#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);
    switch(num){
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thrusday");
            break;
        case 5:
            printf("friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 7:
            printf("Sunday");
            break;
        default :
            printf("Invalid");
            break;
    }
    return 0;
}