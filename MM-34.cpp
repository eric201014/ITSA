#include <iostream>
#include <cstdlib>
using namespace std;

int gcd(int a,int b)
{
	while(b!=0)
	{
		int r=a%b;
		a=b;
		b=r;
	}
	return a;
}

int main()
{
	int n=0;
	cin >> n;
	while(n>0)		// n = number of test case
	{
		int i=0,j=0,max=0,min=0,nn=0;
		cin >> nn;
		for(i=0;i<nn;i++)		// find max and min
		{
			cin >> j;
			if(i==0)
				min=max=j;
			else
			{
				if(j>max)
					max=j;
				if(j<min)
					min=j;
			}
		}
		cout << gcd(max,min) << endl;	
		n--;
	}
	return 0;
}
