#include <stdio.h>
int leapYear(int a){
    if(a%400==0){
        return true;
    }
    if(a%4==0 && a%100!=0){
        return 1;
    }
    else{
        return 0;
    }
}
int main() {
    int year;
    scanf("%d",&year);
    if(leapYear(year)){
        printf("Leap Year");
    }
    else{
        printf("Not a Leap Year");
    }
    return 0;
}