#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int i=0,j=0,c=0,n=0;
	cin >> n;
	int arr[n];
	for(i=0;i<n;i++)
		cin >> arr[i];
		
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
			if(arr[i]>2*arr[j])	// twice than number behind self
				c++;
	cout << c << endl;
	
	return 0;
}
