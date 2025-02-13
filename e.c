#include <stdio.h>
int main (){
	int num;
	while(1){
	printf("enter a number(0 to stop):");
	scanf("%d",&num);
	if(num==0)break;
	if(num<0)continue;
	printf("Positive number: %d\n",num);}
	return 0;
	}
