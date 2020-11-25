#include <stdio.h>

int numAdd(int num1,int num2){

    int rslt;
    rslt=num1+num2;

    printf("Answer Is: %d\n",rslt);
}
int numSubtract(int num1,int num2){

    int rslt;
    rslt=num1-num2;

    printf("Answer Is: %d\n",rslt);
}
int numMultiply(int num1,int num2){

    int rslt;
    rslt=num1*num2;

    printf("Answer Is: %d\n",rslt);
}
int numDivide(int num1,int num2){

    int rslt;
    rslt=num1/num2;

    printf("Answer Is: %d\n",rslt);
}
int numMod(int num1,int num2){

    int rslt;
    rslt=num1%num2;

    printf("Answer Is: %d\n",rslt);
}

int main(){

    int num1,num2;
    char opr;

    printf("Enter Operator: ");
    scanf("%c",&opr);

    printf("Enter First Number: ");
    scanf("%d",&num1);

    printf("Enter Second Number: ");
    scanf("%d",&num2);

    switch(opr){
        case '+':
            numAdd(num1,num2);
            break;
        
        case '-':
            numSubtract(num1,num2);
            break;

        case '*':
            numMultiply(num1,num2);
            break;

        case '/':
            numDivide(num1,num2);
            break;

        case '%':
            numMod(num1,num2);
            break;
    }
}