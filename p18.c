#include <stdio.h>

int calculateProduct(int a, int b) {
    return a * b;  
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int product = calculateProduct(num1, num2);  
    printf("The product of %d and %d is %d\n", num1, num2, product);
    return 0;
}
