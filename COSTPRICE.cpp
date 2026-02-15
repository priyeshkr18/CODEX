#include<iostream>
using namespace std;
int main() {


	float pencil, pen, eraser;
	cout<<"Enter cost of the Pencil: ";
	cin>>pencil;
	cout<<"Enter cost of the pen: ";
	cin>>pen;
	cout<<"Enter cost of the eraser: ";
	cin>>eraser;


	float total_cost = (pencil + pen + eraser);
	

	float afterGST = (total_cost * 18/100);
	float totalAmount = (total_cost + afterGST);

	cout<<"Total cost of all 3 items is "<<totalAmount<<endl;


	return 0;
}