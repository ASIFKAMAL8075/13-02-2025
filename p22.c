#include <stdio.h>

int main() {
int marks;

printf("Enter your marks: ");
scanf("%d", &marks);

   
(marks >= 90) ? printf("Grade: A\n") :
(marks >= 75) ? printf("Grade: B\n") :
(marks >= 50) ? printf("Grade: C\n") :
(marks >= 35) ? printf("Grade: D\n") :
printf("Grade: F\n");

return 0;
}                                                                                

