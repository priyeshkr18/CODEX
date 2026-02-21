#include <iostream>
using namespace std;
int main()
{

	int n;
	cout << "enter n: ";
	cin >> n;
	int revNo = 0;
	while (n > 0)
	{
		int lastDig = n % 10;
		cout << lastDig;
		n /= 10;
	}
	cout << endl;
	return 0;
}