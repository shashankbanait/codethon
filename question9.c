// Write a program to Multiply without using Multiplication operator (*).
#include <stdio.h>

int multiplyWithoutOperator(int a, int b) {
    int result = 0;
    for (int i = 0; i < b; i++) {
        result += a;
    }
    return result;
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    int product = multiplyWithoutOperator(num1, num2);

    printf("Product: %d\n", product);

    return 0;
}
