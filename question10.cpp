// Write a program to read an integer and print its multiplication table.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number to print it's multiplication table: ";
    cin>>n;
    for(int i=1; i<=10; i++){
        cout<<n<<" x "<<i<<" = "<<n*i<<endl;
    }
    return 0;
}