#include<iostream>
using namespace std;
int main() {
	int n;
	cout<<"enter n: ";
	cin>>n;
	int digitSum = 0;
	while(n>0){
		int lastDigit = n % 10;
		digitSum += lastDigit;
		n = n / 10;
	}

	cout<<"sum = "<<digitSum << endl;

	return 0;
}