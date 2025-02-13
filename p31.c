#include <stdio.h>
int main()
{
int num = 15;
if (num % 3 == 0)
{
if (num % 5 == 0)
{
printf("Divisible by both 3 and 5\n");
}
else
{
printf("Divisible by 3 only\n");
}
}
else
{
printf("Not divisible by 3\n");
}
return 0;
}
