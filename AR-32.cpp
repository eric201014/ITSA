#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

int main()
{
	int t=0;
	cin >> t;
	while(t>0)
	{
		char a[60],b[60];
		int la=0,lb=0,i=0,j=0,d=0;
		cin >> a;
		cin >> b;
		la=strlen(a);
		lb=strlen(b);
		
		if(la==lb)		// length equal , print by turns
			for(i=0;i<la;i++)
				cout << a[i] << b[i];

		if(la>lb)
		{
			d=la-lb;
			for(i=0;i<d;i++)
				cout << a[i] << "0";

			for(j=0;j<lb;j++,i++)
				cout << a[i] << b[j];
		}
		
		if(la<lb)
		{
			d=lb-la;
			for(i=0;i<d-1;i++)
				cout << b[i] << "0";
				
			cout << b[i++];

			for(j=0;j<la;j++,i++)
				cout << a[j] << b[i];
		}
		cout << endl;
		t--;
	}
	return 0;
} 
