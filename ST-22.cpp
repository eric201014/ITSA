#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int n=0;
	cin >> n;
	while(n>0)		// n = number of test case
	{
		int n1=0,n2=0,d1=0,d2=0,base=1,rem=0;
		cin >> n1 >> n2;
		
		while(n1>0)
		{
			rem=n1%10;
			d1+=(rem*base);
			n1/=10;
			base*=2;
		}
		base=1;
		while(n2>0)
		{
			rem=n2%10;
			d2+=(rem*base);
			n2/=10;
			base*=2;
		}
		
		cout << d1+d2 << endl;	
		n--;
	}
	return 0;
}
