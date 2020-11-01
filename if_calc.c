#include <stdio.h>

int main(){

	int num1;
	int num2;
	char operatr;
	
	printf("Enter Operator: ");
	scanf("%c",&operatr);
	
	printf("Enter a number: ");
	scanf("%d",&num1);

	printf("Enter another Number: ");
	scanf("%d",&num2);

	
	if(operatr=='+'){
		printf("Answer is %d\n", num1 + num2);
	}else if(operatr=='-'){
		printf("Answer is %d\n", num1 - num2);
	}else if(operatr=='*'){
		printf("Answer is %d\n", num1 * num2);
	}else if(operatr=='/'){
		printf("Answer is %d\n", num1 / num2);
	}else if(operatr=='%'){
		printf("Answer is %d\n", num1 % num2);
	}

return 0;
}
