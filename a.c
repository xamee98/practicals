#include <stdio.h>
#include <math.h>

float square(float num){
    float sqr;
    sqr = pow(num,2);
    return sqr;
}

int main(){

    float numInp;

    printf("Enter the value: ");
    scanf("%f",&numInp);

    printf("Answer is: %.2f",square(numInp));

    return 0;
}