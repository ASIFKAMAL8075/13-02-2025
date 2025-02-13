#include <stdio.h>
int main()
{
int marks = 85;
if (marks >= 50)
{
if (marks >= 75)
{
if (marks >= 90)
{
printf("Grade: A\n");
}
else
{
printf("Grade: B\n");
}
}else
{
printf("Grade: C\n");
}
}
else
{
printf("Fail\n");
}
return 0;
}
