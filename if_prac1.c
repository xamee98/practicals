#include <stdio.h>

int main(){

	int age;
	
	printf("Enter your age: ");
	scanf("%d",&age);
	
	if(age<18)
		printf("You are a child\n");
	else if(age>=18)
		printf("You are a senior citizen\n");

return 0;
}
