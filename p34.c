#include <stdio.h>
int main()
{
int a = 3, b = 3, c = 3;
if (a == b && b == c)
{
printf("Equilateral triangle\n");
}
else if (a == b || b == c || a == c)
{
printf("Isosceles triangle\n");
}
else
{
printf("Scalene triangle\n");
}
return 0;
}
