#include <stdio.h>

int chkVal(int num1,int num2,int num3){

    if(num1>num2 && num1>num3)
        printf("First number is the greatest!\n");
    else if(num2>num1 && num2>num3)
        printf("Second number is the greatest!\n");
    else if(num3>num2 && num3>num1)
        printf("Third number is the greatest!\n");
}

int main(){

    int num1,num2,num3;

    printf("_Enter 3 numbers_\n");
    printf("Enter First Number: ");
    scanf("%d",&num1);

    printf("Enter Second Number: ");
    scanf("%d",&num2);

    printf("Enter Third Number: ");
    scanf("%d",&num3);

    chkVal(num1,num2,num3);

    return 0;
}