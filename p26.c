#include <stdio.h>
int main()
{
char ch = 'e';
if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
printf("The character is a vowel.\n");
}
else {
printf("The character is a constant.\n");
}
return 0;
}
