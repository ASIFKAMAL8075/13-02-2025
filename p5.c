#include<stdio.h>
#include<stdio.h>
int main(){
				double a,b,c discriminant,root1,root2,root3,realpart,imaginerypart;
				print("enter coeffecient a,b and c,");
				scanf("%lf%lf%lf"&a,&b,&c);
				discriminant=b*b-4*a*c;
			  	if (discriminant>0)
{
					root 1=(-b+sqrt(discriminant))/(2*a);
					root 2=(-b-sqrt(discriminant))/(2*a);
					printf("roots are real and different.\n");
					printf("root 1=%lf\n",root1);
					printf("root 2=%lf\n",root2);
}
			else if (discriminant==0)
{
			  root1=root2=-b/(2*a);
			  printf("root are real and same.\n");
			  printf("root1=root2=%.2lf\n",root1);
}
			 else
{
				realpart=-b/(2*a)
				imaginarypart=sqrt(-discriminant)/(2*a);
				print("roots are complex and diffrent.\n");
				printf("root 1=%2lf+%.2lf\n",realpart,imaginarypart);
				printf("root 2=%2lf-%.2lf\n",realpart,imaginarypart);
			}
			return 0;
		}		
			  
			  
			 				
					
