#include <stdio.h>
int main(){
	int num,i;
	printf("enter a positive intiger:");
	scanf("%d",&num);
	if(num<=0){
		printf("please enter a positive number:\n");
	}else{
		printf("factor of %d are:",num);
		for(i=1;i<=num;i++){
			if(num%i==0){
				printf("%d",i);
				}}
				printf("\n");}
				return 0;
				}


