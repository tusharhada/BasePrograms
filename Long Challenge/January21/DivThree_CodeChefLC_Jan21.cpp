#include <iostream>
#define ll long long
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	ll t;
	cin>>t;
	
	while(t--)
	{
		ll n,k,d,sum=0,result=0;
		cin>>n>>k>>d;
		ll a[n];
		
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			sum+=a[i];
		}
		
		result = sum/k;
		
		if(result>=d)	
		{
			result=d;
		}
			
		cout<<result<<endl;	
	} 
}
