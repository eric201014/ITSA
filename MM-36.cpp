#include <iostream>
#include <cstdlib>
using namespace std;

int t[50000];

int main()
{
	int i=0,j=0;
	for(i=0;i<50000;i++)
		t[i]=1;
	t[0]=t[1]=0;
	for(i=2;i<50000;i++)		// prime table
	{
		if(t[i])
			for(j=i+i;j<50000;j+=i)
				t[j]=0;
	}
	
	int n=0;
	while(cin >> n)
	{
		int c=0;
		if(n==0)
			break;
		else
		{
			for(i=2;i<n;i++)	// c = number of prime
				if(t[i])
					c++;
			cout << c << endl;
		}
	}
	return 0;
}
