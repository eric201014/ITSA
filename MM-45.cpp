#include <iostream>
#include <cstdlib>
using namespace std;

int main()		// triangle classify
{
	int a=0,b=0,c=0,max=0;
	cin >> a >> b >> c;
	if(a<1 || b<1 || c<1)
	{
		cout << "invalid" << endl;
		return 0;
	}
				// find largest edge
	max=a;
	if(max<b)
		max=b;
	if(max<c)
		max=c;
		
	if(max==a)
	{
		if((b+c)<=a)
			cout << "invalid" << endl;
		else
		{
			if((a*a)==((b*b)+(c*c)))
				cout << "right" << endl;
			else if((a*a)<((b*b)+(c*c)))
				cout << "acute" << endl;
			else
				cout << "obtuse" << endl;
		}
		return 0;
	}
	if(max==b)
	{
		if((a+c)<=b)
			cout << "invalid" << endl;
		else
		{
			if((b*b)==((a*a)+(c*c)))
				cout << "right" << endl;
			else if((b*b)<((a*a)+(c*c)))
				cout << "acute" << endl;
			else
				cout << "obtuse" << endl;
		}
		return 0;
	}
	if(max==c)
	{
		if((b+a)<=c)
			cout << "invalid" << endl;
		else
		{
			if((c*c)==((b*b)+(a*a)))
				cout << "right" << endl;
			else if((c*c)<((b*b)+(a*a)))
				cout << "acute" << endl;
			else
				cout << "obtuse" << endl;
		}
		return 0;
	}
	return 0;
}
