#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int i=0,j=0,c=0,n=0,max=0,arr[200];
	
	while(cin >> arr[n])
		n++;
		
	for(i=0;i<n;i++)
	{
		c=0;		// c = total for each time
		for(j=i;j<n;j++)
		{
			c+=arr[j];
			if(max<c)
				max=c;
		}
	}
	cout << max << endl;
	
	return 0;
}
