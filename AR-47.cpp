#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int n=0;
	cin >> n;
	
	while(n%2==0)
		n/=2;
	while(n%3==0)
		n/=3;
	while(n%5==0)
		n/=5;
	
	if(n == 1)
		cout << "Regular number!" << endl;
	else
		cout << "Irregular number!" << endl;
	
	return 0;
 } 
