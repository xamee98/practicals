#include <stdio.h>

int main(){
	
	char inpStr[20];
	int i;
	int d=0;
	
	printf("Enter Cypher text: ");
	fgets(inpStr, 20, stdin);
	
	printf("Plain Text is: ");
	for(i=0; i<20; i++){
		
		d = (int) inpStr[i];
		d -= 5;
		
		printf("%c", d);
	}
	
	return 0;
}
