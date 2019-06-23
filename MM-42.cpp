#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int n=0;
	cin >> n;
	if(n>=8128)
		cout << "6 28 496 8128 is perfect number" << endl;
	else
		if(n>=496)
			cout << "6 28 496 is perfect number" << endl;
	else
		if(n>=28)
			cout << "6 28 is perfect number" << endl;
	else
		if(n>=6)
			cout << "6 is perfect number" << endl;
	return 0;
}
