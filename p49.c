#include <stdio.h>
int main()
{
for (int i = 1; i <= 10; i++)
{
if (i % 3 == 0)
{
continue; // Skip numbers that are multiples of 3
}
printf("%d ", i);
}
return 0;
}
