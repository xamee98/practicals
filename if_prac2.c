#include <stdio.h>

int main(){

	int age;
	
	printf("Enter your age: ");
	scanf("%d",&age);
	
	if(age<18)
		printf("You are a Child\n");
	else if(age>=18 && age<65)
		printf("You are an Adult\n");
	else if(age>=65)
		printf("You are a Senior Citizen\n");

return 0;
}
