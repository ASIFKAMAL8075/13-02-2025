#include <stdio.h>
int main()
{
int num;
do
{
printf("Enter a number (negative to stop): ");
scanf("%d", &num);
if (num >= 0)
{
printf("You entered: %d\n", num);
}
} while (num >= 0);
return 0;
}
