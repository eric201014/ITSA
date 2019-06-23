#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

int encode(int c)	// change char by list in problem AR-23
{
	if((c>=65 && c<=77) || (c>=97 && c<=109))
		return c+13;
	if((c>=78 && c<=90) || (c>=110 && c<=122))
		return c-13;
	else
		return c;
}

int main()
{
	char i[2000];
	cin.getline(i,2000);

	int j=0,l=strlen(i);
	for(j=0;j<l;j++)
		i[j]=encode(i[j]);
	cout << i << endl ;
	return 0;
}
