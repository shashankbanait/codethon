//  Write a program to print EVEN numbers from 1 to N using a while loop.
#include<stdio.h>
int main(){
    int num;
    printf("Enter a number till you have to find even numbers: ");
    scanf("%d", &num);
    for(int i=1; i<=num; i++){
        if(num%2==0){
            printf("%d\n", i);
        }
    }
    return 0;
}