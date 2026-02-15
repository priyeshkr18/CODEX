#include<iostream>
using namespace std;
int main() {
    double marksOfPhysics;
    double marksOfChemistry;
    double marksOfMaths;
    cout<<"Enter marks of physics : ";
    cin>>marksOfPhysics;
    cout<<"Enter marks of chemistry : ";
    cin>>marksOfChemistry;
    cout<<"Enter marks of maths : ";
    cin>>marksOfMaths;
    double averageMarks = (marksOfPhysics + marksOfChemistry + marksOfMaths)/3;
    cout<<averageMarks<<endl;

    return 0;
}