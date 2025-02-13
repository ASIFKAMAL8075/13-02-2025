#include <stdio.h>
#include <math.h>
int main()
{
				float radius,area,volume;
				const float pi=3.141459;
				printf("enter the radius of the sphere:");
				scanf("%f",&radius);
				area=4*pi*radius*radius;
				volume=(4.0/3.0)*pi*pow(radius,3);
				printf("surface area:%2f\n",area);
				printf("volume:%2f\n",volume);
				return 0;
} 
