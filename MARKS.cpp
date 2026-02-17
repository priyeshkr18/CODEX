#include<iostream>
using namespace std;
int main() {

	int marks;
	cout<<"Enter your marks: ";
	cin>>marks;

	if(marks >= 90){
		cout << "O";
	} else if(marks >= 80){
		cout<<"A";
	}else{
		cout<<"B"<<endl;
	}

	return 0;
}