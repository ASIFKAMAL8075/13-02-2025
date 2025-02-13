#include <stdio.h>
int main()
{
int num;
while (1)
{
printf("Enter a number (0 to stop): ");
scanf("%d", &num);
if (num == 0) break;
if (num < 0) continue;
// Stop if user enters 0
// Skip negative numbers
printf("Positive number: %d\n", num);
}
return 0;
}
