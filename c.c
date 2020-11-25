#include <stdio.h>

int numCheck(int num){

    if(num%2 != 0)
        printf("Number is an Odd Number! \n");
    else
        printf("Number is an Even Number! \n");
}

int main(){

    int num;

    printf("Enter a number :");
    scanf("%d", &num);

    numCheck(num);

    return 0;
}