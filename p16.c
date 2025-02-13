#include<stdio.h>
int main()
{
	int n,sum=0,i=1;
	printf("Enter a positive number :");
	scanf("%d",&n);
	
while(i<=n)
{
sum+=i;
i++;
}
printf("sum of first %d natural number is : %d\n",n,sum);
return 0;

}
