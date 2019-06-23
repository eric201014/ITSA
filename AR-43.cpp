#include <iostream>
#include <cstdlib>
using namespace std;

int main()	//two matrix sum
{
	int i=0,j=0,n=0,m=0;
	cin >> n >> m;
	
	int a[n][m],b[n][m],c[n][m];
	
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			cin >> a[i][j];
			
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			cin >> b[i][j];
			
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			c[i][j]=a[i][j]+b[i][j];
			
	for(i=0;i<n;i++)
	{
		for(j=0;j<m-1;j++)
			cout << c[i][j] << " ";
		cout << c[i][j];
		cout << endl;
	}
	
	return 0;
}
