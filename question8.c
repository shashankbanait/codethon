// Write a program to find second largest number in an array.
#include<stdio.h>
int main(){
    int arr[] = {34,23,89,36,97};
    int length = sizeof(arr) / sizeof(arr[0]);
    for(int i=0; i<length; i++){
        if(arr[i]>arr[i+1]){
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
}