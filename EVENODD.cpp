#include<iostream>
using namespace std;
int main() {
    int num;
    cout<<"Enter a number: ";
    //Find the number if it's even or odd
    cin>>num;
    if (num % 2 == 0) {
        cout<<"Even";
    } else if ( num % 2 != 0) {
        cout<<"Odd";
    } else {
        cout<<"Invalid input";
    }
    return 0;
}