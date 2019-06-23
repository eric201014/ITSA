#include <iostream>
#include <cstdlib>
using namespace std;

struct num
{
	int n;
	int t;	
};

int main()
{
	int e=0,c=0,i=0,j=0;
	num arr[100];
	
	while(cin >> e)		// e = input
	{
		if(e==-999)
			break;
			
		int flag=0;
		
		for(i=0;i<c;i++)	// c = number of distinct input
		{
			if(e==arr[i].n) // if e is already in arr
			{
				arr[i].t++;
				flag=1;
				break;
			}		
		}
		
		if(!flag)			// if e is not in arr
		{
			arr[c].n=e;
			arr[c++].t=1;	
		}
			
	} 
	
	for(i=0;i<c;i++)		// bubble sort
	{
		int k=0;
		for(j=0;j<c-i-1;j++)
			if(arr[j].n < arr[j+1].n)
			{
				num tmp;
				tmp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
				k=1;
			}
		if(!k)
			break;
	}
	
	for(i=0;i<c;i++)
		cout << arr[i].n << " " << arr[i].t << endl;
	
	return 0;
}
