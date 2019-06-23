#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int n=0,m=0,k=0;
	cin >> n >> m >> k;
	
	int i=0,j=0,a[n][m],b[n][m],c[n][m];
	
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			cin >> a[i][j];

	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			cin >> b[i][j];

	for(i=0;i<n;i++)		// matrix operate
		for(j=0;j<m;j++)
			c[i][j]=k*(a[i][j]+b[i][j]);
			
	for(i=0;i<m;i++)
	{
		for(j=0;j<n-1;j++)
			cout << c[j][i] << " ";
		cout << c[j][i];
		cout << endl;
	}
	
	return 0;
}
  
