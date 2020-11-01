#include <stdio.h>		     //calculator
			
int main(){

	double num1, num2, result;
	char operatr;

	printf("Enter a Opetator: ");
	scanf("%c",&operatr);

	printf("Enter First Number: ");
	scanf("%lf",&num1);

	printf("Enter Second Number: ");
	scanf("%lf",&num2);
	
	if(operatr=='+')
		result = num1 + num2;
	else if(operatr=='-')
		result = num1 - num2;
	else if(operatr=='*')
		result = num1 * num2;
	else if(operatr=='/')
		result = num1 / num2;
	/*else if(operatr=='%')
		result = num1 % num2;*/
	else
		printf("Invalid Operator!");
		

	printf("%lf", result);
	
	return 0;
}
