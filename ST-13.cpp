#include <iostream>
#include <cstdlib>
#include <cstring>
#include <ctype.h>
using namespace std;

int main()		// same number of each char
{
	char in[100];
	cin >> in;
	int i=0,j=0,len=strlen(in);
	int ta[26];
	for(i=0;i<26;i++)			// table for each char in input
		ta[i]=0;
	for(i=0;i<len;i++)
		in[i]=tolower(in[i]);
	for(i=0;i<len;i++)
		ta[(in[i]-'a')]++;
	
	int n=0;
	cin >> n;
	while(n>0)
	{
		char i2[100],i3[100];	// i3 = lower case of i2
		cin >> i2;
		len=strlen(i2);
		for(i=0;i<len;i++)
			i3[i]=tolower(i2[i]);
		int ta2[26];
		for(i=0;i<26;i++)		// table use like above
			ta2[i]=0;
		for(i=0;i<len;i++)
			ta2[(i3[i]-'a')]++;
		
		i=0;
		while(ta[i]==ta2[i])
		{
			i++;
			if(i==26)			// all same
				break;	
		}
		if(i==26)
			cout << i2 << endl;
		
		n--;
	}
	return 0;
}
