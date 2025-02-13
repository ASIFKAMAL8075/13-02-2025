#include<stdio.h>
void main(){
		int a,b;
		printf("enter the first number;");
		scanf("%d",&a);
		printf("enter a seconed number");
		scanf("%d",&b);
		a=a+b;
		b=a-b;
		a=a-b;
		printf("after swapping:\n");
		printf("a=%d\n",a);
		printf("b=%d\n",b);
}
