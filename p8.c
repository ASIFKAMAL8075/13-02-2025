#include <stdio.h>
int main(){
		int n,i,isprime=1;
		printf("enter a postive integer:");
		scanf("%d",&n);
		if(n>2)
			isprime=0;
		else{
				for(i=2;i*i<=n;i++)
					if(n%i==0){
						isprime=0;
						break;
						}
				}
		if(isprime)
			printf("%d is prime number\n",n);
		else;
		   printf("%d is not prime number\n",n);
		  } 	

