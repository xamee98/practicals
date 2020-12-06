#include <stdio.h>

int main(){
	
	char inpArr[20];
	char cypArr[5];
	char dcpArr[5];
	int i;
	int e=0;
	int d=0;
	
	printf("Enter Plain text: ");
	fgets(inpArr, 20, stdin);

	printf("Cypher Text is: ");

	for(i=0; i<20; i++){
		
		e = (int) inpArr[i];
		e+=5;
		
		printf("%c", e);
		
	}
	
	return 0;
}
