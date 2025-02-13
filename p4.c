#include<stdio.h>
int main()
{
				int marks;
				printf("enter your marks:");
				scanf("%d",&marks);
				if (marks>=90)
					printf("GRADE:A\n");
				else if (marks>=80)
					printf("GRADE:B\n");
				else if (marks>=70)
					printf("GRADE:C\n");
				else if (marks>=60)
					printf("GRADE:D\n")	;
			 	else
			 		printf("GRADE:F\n");
 return 0;
}

