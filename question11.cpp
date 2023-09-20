// Write a program to Calculate Product of Digits of a Number.
#include<iostream>
using namespace std;
int main(){
    int n, ans = 1, rem;
    cout<<"Enter a program to calculate product of digits of a number: ";
    cin>>n;
    while(n!=0){
        rem = n%10;
        ans = ans * rem;
        n = n / 10;
    }
    cout<<"\nYour answer is: "<<ans;
    return 0;
}