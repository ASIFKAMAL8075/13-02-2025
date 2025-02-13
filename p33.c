#include <stdio.h>
int main()
{
int num;
printf("Enter a number: ");
scanf("%d", &num);
if (num % 9 == 0)
{
printf("%d is divisible by 9\n", num);
}
else if (num % 6 == 0)
{
printf("%d is divisible by 6\n", num);
}
else if (num % 3 == 0)
{
printf("%d is divisible by 3\n", num);
}
else
{
printf("%d is not divisible by 3, 6, or 9\n", num);
}
return 0;
}
