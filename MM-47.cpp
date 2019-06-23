#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int a=0,b=0,t=0;
	cin >> a >> b;
		t=a*b;
	cin >> a >> b;
		t+=a*b;
	cin >> a >> b;
		t+=a*b;
	cout << t << endl;
	
	return 0;
}
