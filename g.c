#include <stdio.h>

void oddEven(int x){

    if(x>0){
        oddEven(x-2);
    }else{
        return;
    }
    printf("\n %d \n", x);
}

int main(){

    int n;

    printf("Enter the starting number: ");
    scanf("%d",&n);

    oddEven(n);

    return 0;
}