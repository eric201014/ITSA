#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int i=0,min=0,max=0;
	cin >> min;
	max=min;
	while(cin >> i)
	{
		if(i>max)
			max=i;
		if(i<min)
			min=i;
	}
	cout << "Largest number = " << max << endl;
	cout << "Smallest number = " << min << endl;
	return 0;
}
