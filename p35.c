#include <stdio.h>
int main()
{
int units = 150, bill;
if (units <= 100)
{
bill = units * 1;}
else if (units <= 200)
{
bill = 100 * 1 + (units - 100) * 2;
}
else
{
bill = 100 * 1 + 100 * 2 + (units - 200) * 3;
}
printf("Total bill: ₹%d\n", bill);
return 0;
}
