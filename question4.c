// compare two numbers by using ternary operator in c
#include<stdio.h>
int main(){
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the first number: ");
    scanf("%d", &num2);
    (num1>num2)?printf("num1 is greater"):printf("num2 is greater");

    return 0;
}