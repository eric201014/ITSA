#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

int main()
{
	char a[300][5];
	int aa[50];
	int i=0,j=0,c=0,cc=0;
	while(cin >> a[i])
		i++;
		
	for(j=0;j<i;j++)
	{
		if(strcmp("NA",a[j])==0)
		{
			c++;		// c = number of NA
			aa[cc++]=j;	// aa = index of NA
		}	
	}
	
	cout << c << endl;
	
	for(i=0;i<cc;i++)
		cout << aa[i] << endl;
		
	return 0;
}
