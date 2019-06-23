#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

int main()
{
	char a[20];
	while(cin >> a)
	{
		int i=0,j=0,c=0,len=strlen(a);
		
		for(i=len-1;i>=0;i--)
		{
			int co=1;
			for(j=0;j<len-1-i;j++)	// 26carry
				co*=26;
				
			c+=co*(a[i]-'A'+1);		// c = sum of all ascii*base
		}
		cout << c << endl;
	}
	return 0;
}
