#include<stdio.h>
int main(){
	int num1,num2,add,sub,mult,divi;
	printf("enter two numbers");
	scanf("%d%d",&num1,&num2);
	add  =num1+num2;
	sub  =num1-num2;
	mult =num1*num2;
	if(num2!=0){
			divi =num1,num2;
			printf("division of two numbers is %d\n",divi);
			printf("addition result:%d\n",add );	
			printf("substraction result:%d\n",sub );
			printf("multiplication result:%d\n",mult );
	}else{
			printf("0 is not allowed");
	}
	}
