#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int num=0,tmp=0;
	int arr[5000];
	while(cin >> tmp)
		arr[num++] = tmp;
		
	for(int i=0;i<num-1;i++)
		for(int j=0;j<num-i-1;j++)
			if(arr[j] > arr[j+1])
			{
				int t = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = t;
			}
	
	if(num%2 == 0)
		cout << (arr[num/2]+arr[num/2-1])/2 << endl;
	else
		cout << arr[num/2] << endl;
			
	return 0;
}
