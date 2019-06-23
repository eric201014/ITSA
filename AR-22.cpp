#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

int encode(int c)
{
	return c-3;	
}

int main()
{
	char i[2000];
	while(cin >> i)
	{
		int len=strlen(i);
		int k=0;
		for(k=0;k<len;k++)
			i[k]=encode(i[k]);
		cout << i << endl;
	}
	
	return 0;
}
