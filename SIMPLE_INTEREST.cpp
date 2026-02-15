#include<iostream>
using namespace std;
int main() {
    int p,r,t;
    cout<<"enter  p: ";
    cin>>p;
    cout<<"enter r: ";
    cin>>r;
    cout<<"enter t: ";
    cin>>t;

    int si = (p*r*t)/100;

    cout<<"Simple interest of the given input is : "<<si<<endl;

    return 0;
}