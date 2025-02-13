#include <stdio.h>
int main()
{
int N, sum = 0, i = 2;
printf("Enter the value of N: ");
scanf("%d", &N);
while (i <= N) {
sum += i;
i += 2;
}
printf("Sum of even numbers up to %d is %d\n", N, sum);
return 0;
}
