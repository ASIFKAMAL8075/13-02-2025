#include <stdio.h>
int main ()
{
	int a=10,b=20,c=5;
	int smallest = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);
	printf("smallest number%d\n",smallest);
return 0;
}
