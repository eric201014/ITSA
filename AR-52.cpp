#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

void morse(int c)
{
	if(c=='A')
		cout << " 10";
	if(c=='B')
		cout << " 0111";
	if(c=='C')
		cout << " 0101";
	if(c=='D')
		cout << " 011";
	if(c=='E')
		cout << " 1";
	if(c=='F')
		cout << " 1101";
	if(c=='G')
		cout << " 001";
	if(c=='H')
		cout << " 1111";
	if(c=='I')
		cout << " 11";
	if(c=='J')
		cout << " 1000";
	if(c=='K')
		cout << " 010";
	if(c=='L')
		cout << " 1011";
	if(c=='M')
		cout << " 00";
	if(c=='N')
		cout << " 01";
	if(c=='O')
		cout << " 000";
	if(c=='P')
		cout << " 1001";
	if(c=='Q')
		cout << " 0010";
	if(c=='R')
		cout << " 101";
	if(c=='S')
		cout << " 111";
	if(c=='T')
		cout << " 0";
	if(c=='U')
		cout << " 110";
	if(c=='V')
		cout << " 1110";
	if(c=='W')
		cout << " 100";
	if(c=='X')
		cout << " 0110";
	if(c=='Y')
		cout << " 0100";
	if(c=='Z')
		cout << " 0011";
}

int main()
{
	int n=0;
	cin >> n;		// n = number of test case
	while(n>0)
	{
		char in[200];
		cin >> in;
		int i=0,len=strlen(in);
		cout << in << ":";

		for(i=0;i<len;i++)
			morse(in[i]);
		cout << endl;
		n--;
	}
	return 0;
}
