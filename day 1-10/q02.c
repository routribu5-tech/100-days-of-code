/*q02:Q2: Write a program to input two numbers and display their sum, difference, product, and quotient
*/#include <stdio.h>

int main() {
    int num1, num2;
    float quotient;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("Sum = %d\n", num1 + num2);
    printf("Difference = %d\n", num1 - num2);
    printf("Product = %d\n", num1 * num2);
    if (num2 != 0)
        printf("Quotient = %.2f\n", (float)num1 / num2);
    else
        printf("Division by zero is not possible.\n");
    return 0;
}

