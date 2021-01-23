#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int t,n,d;
	cin>>t;
	
	while(t--)
	{
		cin>>n>>d;
		int count_risk=0,result;
		
		for(int i=0;i<n;i++)
		{
			int temp;
			cin>>temp;
			if(temp>=80 || temp<=9)	count_risk++;
		}
		
		int val1, val2;
		val1= ceil((double)count_risk/d);
		val2= ceil((double)(n-count_risk)/d);
		cout<<val1<<" "<<val2<<endl;
		result = val1 + val2;
		cout<<result<<endl;
		
	}
	
	return 0;
}
