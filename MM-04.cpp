#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int n=0;
	cin >> n;
	while(n>0)		// n = number of test case
	{
		long long int a=0;
		cin >> a;
		if(a==6||a==28||a==496||a==8128||a==33550336||a==8589869056)
			cout << "perfect" << endl;
		else
			cout << "nonperfect" << endl;
		n--;
	}

	return 0;
}
