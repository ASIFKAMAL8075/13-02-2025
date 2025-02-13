#include <stdio.h>
int main()
{
int N, a = 0, b = 1, next;
printf("Enter the number of terms: ");
scanf("%d", &N);
printf("Fibonacci Series: ");
for (int i = 1; i <= N; i++)
{
printf("%d ", a);
next = a + b;
a = b;b = next;
}
return 0;
}
