#include <iostream>
#define ll long long
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t;
	cin>>t;
	
	while(t--)
	{
		ll n,x=0,y=0;
		cin>>n;
		
		for(int i=0;i<n;i++)
		{
			ll m;
			cin>>m;
			ll arr[m];
			
			for(int i=0;i<m;i++)
			{
				cin>>arr[i];
				if(arr[i] < 0)
					y++;
				else if(arr[i] > 0)
					x++;
			}				
		}
		
		cout<<x*y<<endl;
	}
	
}
