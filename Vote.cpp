#include<iostream>
using namespace std;
int main() {
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    
    if (age >= 18) {
        cout<<"Can vote";
        
    } else {
        cout<<"Can't vote";
        
        return 0;
    }
}