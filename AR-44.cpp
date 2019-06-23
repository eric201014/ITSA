#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main()		// two matrix operate
{
	int i=0,j=0,n=0,m=0;
	cin >> n >> m;
	double a[n][m],b[n][m],c[n][m];
	
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			cin >> a[i][j];

	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			cin >> b[i][j];
			
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			c[i][j]=(a[i][j]+b[i][j])/2;
			
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)	// fixed << setprecision -- control digit
			cout << "[" << fixed << setprecision(1) << c[i][j] << "]";
		cout << endl;
	}

	return 0;
}
