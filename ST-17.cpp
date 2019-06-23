#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int n=0;
	cin >> n;
	while(n>0)		// n = number of test case
	{
		int in=0;
		cin >> in;
		
		int c=31,k=0,a=0,b=0;
		for(c=31;c>=0;c--)
		{
			k=in>>c;
			if(k&1)
				a++;		// a = number of 1 in binary type of input
		}
		while(in>0)			// hexa type
		{
			c=in%10;
			if(c==1||c==2||c==4||c==8)	// 0001.0010.0100.1000	
				b+=1;
			if(c==3||c==5||c==6||c==9)	// 0011.0101.0110.1001
				b+=2;
			if(c==7)					// 0111
				b+=3;
			in/=10;			
		}
		cout << a << " " << b << endl;
		n--;
	}
	return 0;
}
