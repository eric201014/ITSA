#include <iostream>
#include <cstdlib>
#include <cstring>
#include <ctype.h>
using namespace std;

int main()
{
	char nn[3];
	cin.getline(nn,3);
	int n=atoi(nn);
//	int n=0;
//	cin >> n;
	while(n>0)		// n = number of test case
	{
		char in[100];
		cin.getline(in,100);
		int i=0,j=0,len=strlen(in);
		in[len-1]='\0';
		len--;
		for(i=0;i<len;i++)
			in[i]=tolower(in[i]);
			
		for(i=0,j=len-1;i<j;i++,j--)	// -->  <--
			if(in[i]!=in[j])
				break;
				
		if(i>=j)
			cout << "T" << endl;
		else
			cout << "F" << endl;
		
		n--;
	}
	return 0;
} 
