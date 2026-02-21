#include<iostream>
using namespace std;
int main() {
	int n;
	cout<<"enter n: ";
	cin>>n;
	int sumDigit = 0;
	while(n>0){
		int lastDig = n%10;
		if(lastDig % 2 != 0){
			sumDigit += lastDig;
		}
		n = n/10;
	}
	cout<<"sum is "<<sumDigit<<endl;

	return 0;
}