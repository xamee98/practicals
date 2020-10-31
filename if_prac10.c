#include <stdio.h>

int main(){

	int num1;
	int num2;
	int result;
	char opr;
	
	printf("Enter first number: ");
	scanf("%d", num1);
	
	printf("Enter Second number: ");
	scanf("%d", num2);
	
	printf("Enter Operator: ");
	scanf("%c", opr);
	
	switch(opr){
		case '+':
		result = num1 + num2;
		break;
		
		case '-':
		result = num1 - num2;
		break;
		
		case '*':
		result = num1 * num2;
		break;
		
		case '/':
		result = num1 / num2;
		break;
		
		default:
		printf("Invalid operator!\n");
	}
	
	printf("Result is: %d", result);
}
