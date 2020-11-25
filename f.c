#include <stdio.h>

void natNum(int n){

    if(n>0){
        natNum(n-1);
    }else{
        return;
    }
    printf("\n %d \n", n);
}

int main(){

    int n;

    printf("Enter the starting number: ");
    scanf("%d",&n);

    natNum(n);

    return 0;
}