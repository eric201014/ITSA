#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int i=0,j=0,tmp=0,n=0;
	cin >> n;
	int s[n+1];
	for(i=0;i<n+1;i++)
		s[i]=0;
	s[0]=1;
	while(cin >> tmp)
		s[tmp]=1;			// s[]=1 represent exist , !s[] = miss
	
	for(i=0;i<n+1;i++)
	{
		if(!j && !s[i])		// first miss
		{
			cout << i;	
			j=1;
		}
		else				// other miss
			if(!s[i])
				cout << " " << i;
	
	}
	cout << endl;
	
	return 0;
} 
