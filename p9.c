#include<stdio.h>
void main (){
		float celsuis,fahrenheit;
		printf("enter temperature in celsuis");
		scanf("%f",&celsuis);
		fahrenheit=(celsuis*9/5)+32;
		printf("temperature in fahrenheit;%.2f\n",fahrenheit );
}
