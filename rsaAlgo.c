#include <stdio.h>
#include <math.h>

int gcd(int x, int y)
{
    int temp;
    while(1)
    {
        temp = x%y;
        if(temp==0)
        return y;
        x = y;
        y = temp;
    }
}

int dec(int s, int t, int d){  //function for d

	if(d*s == (1+t)){
		return d;
	}
}

int main(){

	int a,b;
	
	printf("enter two prime number\n");
	printf("Enter Prime Number 1: ");
	scanf("%d",&a);
	printf("Enter Prime Number 2: ");
	scanf("%d",&b);
	
	int n;
	n=a*b;
	printf("n = %d\n",n);
	
	int t;   //totient
	t= (a-1)*(b-1);
	printf("totient is: %d\n", t);
	
	int e;
	printf("Enter a value for Encryption Key: ");
	scanf("%d",&e);
	
	
	if(gcd(t,e)==1){
		printf("Value is correct!\n");
		printf("Your public key is: %d\n",e);
		
		int d; // private decypher key
		printf("Enter a value for private key: ");
		scanf("%d",&d);
		if(dec(e,t,d)!=0){
			printf("Chosen decryption key is correct!\n");
			
			int m; //message to encrypt
			printf("Enter Messege to Encrypt: ");
			scanf("%d",&m);
			
			int ct; //generate cypher text
			int pwr = pow(m,e);
			ct = pwr%n;
			printf("Preview cypher text: %d", ct);
			
			int msg; //decypher messege
			int msgpwr=pow(ct,d);
			msg=msgpwr%n;
			printf("Decyphered message is: %d\n", msg);
			
		}else{
			printf("Chosen decryption key is invalid!\n");
		}
		
		
	}else{
		printf("value for e is incorrect!");
	
	}
	
	return 0;	
}
