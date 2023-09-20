#include<stdio.h>
int main(){
    printf("Enter a number to find a cube: ");
    int cube=1, num;
    scanf("%d", &num);
    for (int i = 1; i <= 3; i++) {
        cube *= num;
    }
    printf("%d", cube);
}