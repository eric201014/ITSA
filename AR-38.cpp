#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int t=0,e=0;
	cin >> e;
	for(t=0;t<e;t++)	// e = number of test case
	{
		int n=0,k=0,c=0;
		cin >> n >> k >> k;
		
		int arr[n],vi[n],i=0,j=0;	// vi[] = whether visit , each number can use only once
		for(i=0;i<n;i++)
		{
			cin >> arr[i];
			vi[i]=0;
		}
		
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if((arr[i]+arr[j] == k) && vi[i]==0 && vi[j]==0)	// if sum of two number == k
				{
					c++;
					vi[i]=1;
					vi[j]=1;
					break;
				}
			}
		}
		cout << c << endl;
	}
	return 0;
}
