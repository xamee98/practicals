#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int age;
    char marital;
	char sex;
       
    printf("Enter Your Gender and Marital Status: ");
    scanf("%c %c",&sex,&marital);
    	
	printf("Enter Your Age: ");
    scanf("%d",&age);
	
    if(marital=='Y'){
        if((sex=='M')||(sex=='F')){
            printf("You are insured!\n");            
        }
    }else if(marital=='N'){
        if((sex=='M')&&(age>30)){
            printf("You are insured!\n");
        }else if((sex=='F')&&(age>25)){
            printf("You are insured!\n");
        }else if(((sex=='M')&&(age<30)||(sex=='F')&&(age<25))){
            printf("You are not insured!\n");
        }
    }

    return 0;
}