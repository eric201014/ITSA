#include <iostream>
#include <cstdlib>
using namespace std;

int p[2000000];

int main()		// find min gap between two prime(between a,b)
{
	int i=0,j=0,s=0,e=0;
	for(i=0;i<2000000;i++)
		p[i]=1;
	p[0]=p[1]=0;
	
	for(i=2;i<2000000;i++)		// prime table
	{
		if(p[i])
			for(j=i+i;j<2000000;j+=i)
				p[j]=0;
	}
	
	cin >> e;
	for(s=0;s<e;s++)
	{
		int a=0,b=0,c=0,k=0,a1=0,a2=0,t=0,d=0;
		cin >> a >> b;
		for(k=a;k<=b;k++)
		{
			if(p[k])
				c++;		// c = number of prime between a,b
		}	
		if(c<2)
			cout << "Not found" <<endl;
		else
		{
			int arr[c];
			for(k=a;k<=b;k++)	// put all prime between a,b in arr
				if(p[k])
					arr[t++]=k;

			d=arr[1]-arr[0];	// d = gap between two prime
			a1=arr[0];
			a2=arr[1];
			
			for(t=1;t<c-1;t++)
			{
				if(arr[t+1]-arr[t]<d)
				{
					d=arr[t+1]-arr[t];
					a1=arr[t];
					a2=arr[t+1];
				}
				
			}
			cout << a1 << " " << a2 << endl;
		}	
	}
	return 0;
}
