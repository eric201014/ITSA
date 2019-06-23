#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int n=0;
	cin >> n;
	while(n>0)		// n = number of test case
	{
		int i=0,a=0,b=1;
		cin >> a;
		
		for(i=1;i<=a;i++)
			b*=i;
			
		cout << b << endl;	
		n--;
	}
	return 0;
}
