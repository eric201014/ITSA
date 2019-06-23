#include <iostream>
#include <cstdlib>
using namespace std;

int main()		// 0 = more girl , 1 = more boy , 2 = tie
{
	int i=0,j=0,n=0,m=0,b=0,tmp=0;
	cin >> n >> m;
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
		{
			cin >> tmp;
			if(tmp)		// b = number of boy
				b++;
		}
		
	if(b==(n*m/2))		// equal to half of n*m
		cout << "2" << endl;
	if(b>(n*m/2))		// more boy
		cout << "1" << endl;
	if(b<(n*m/2))		// more girl
		cout << "0" << endl;

	return 0;
}
