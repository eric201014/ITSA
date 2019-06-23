#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int i=0,n=0;
	cin >> n;		// n = number of test case 
	
	int t1=0,t2=0,t3=0;		// tn = score of team n
	char tmp[100];
	for(i=0;i<n;i++)
	{
		cin >> tmp;			// correct +10 , wrong -10
		if(tmp[0]=='c')
			t1+=10;
		if(tmp[0]=='w')
			t1-=10;
			
		cin >> tmp;
		if(tmp[0]=='c')
			t2+=10;
		if(tmp[0]=='w')
			t2-=10;
			
		cin >> tmp;
		if(tmp[0]=='c')
			t3+=10;
		if(tmp[0]=='w')
			t3-=10;
	}
	
	int j=-n;		// j = lowest point
	for(n=n;n>=j;n--)		// from largest point to lowest point
	{
		int flag=0;
		if(t1 == n*10)
		{
			cout << "(1," << n*10 << ")" ;
			flag=1;
		}
		if(t2 == n*10)
		{
			cout << "(2," << n*10 << ")" ;
			flag=1;
		}
		if(t3 == n*10)
		{
			cout << "(3," << n*10 << ")" ;
			flag=1;
		}
		if(flag)
			cout << endl;
	}
	
	return 0;	
} 
