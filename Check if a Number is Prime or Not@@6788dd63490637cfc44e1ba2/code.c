#include <stdio.h>
int prime(int a){
    for(int i = 2 ;i<a ;i++){
        if(a%i == 0){
            return 0;
        }
    }
    return 1;
}
int main() {
    int num;
    scanf("%d",&num);
    if(prime(num)){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}