#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int t=0;
	cin >> t;
	
	while(t>0)
	{
		int i=0,j=0,n=0,c=0,max=0;
		cin >> n;
		
		int arr[n];			// n = size of input
		for(i=0;i<n;i++)
			cin >> arr[i];
			
		for(i=0;i<n;i++)
		{
			c=0;			// c = total for each time
			for(j=i;j<n;j++)
			{
				c+=arr[j];
				if(c>max)
					max=c;
			}
		}
		cout << max << endl;
		t--;
	}
	return 0;
}
