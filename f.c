#include <stdio.h>
int main() {
	int num,count=0;
	float sum=0,average;
	printf("enter a positive number :(negative number to stop):\n");
	while (1){
		scanf("%d",&num);
		if(num<0){
		break;}
		sum+=num;
		count++;}
	if(count==0){
		printf("No positive number were entered.\n");
		}else{
			average=sum/count;
			printf("sum:%.2f\n",sum);
			printf("Average:%.2f\n",average);}
			
			return 0;
			}
