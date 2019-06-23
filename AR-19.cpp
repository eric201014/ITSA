#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

int main()
{
	int n=0;
	while(cin >> n)
	{
		int i=0,nn=sqrt(n)+1;
		
		for(i=nn;i>0;i--)		// find square root i , from sqrt(n) to 1
			if(n%(i*i) == 0)
				break;
		
		cout << n << " = " << n/(i*i) << "*" << i << "^2" << endl;	
	}
	return 0;
}
