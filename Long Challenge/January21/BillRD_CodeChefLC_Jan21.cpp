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
		ll n,k,x,y,diff;
		cin>>n>>k>>x>>y;
		
		if(x==y)	
		{
			cout<<n<<" "<<n<<endl;
		}

		
		else if(x>y)
		{
			diff = x-y;
			int collision = k%4;
			
			if(collision == 1)
			{	x=n;
			 	y=n-diff;
			}
			else if(collision == 2)
			{	x=n-diff; 
				y=n;
			}
			else if(collision == 3)
			{	x=0; 
				y=diff;
			}
			else if(collision == 0)
			{	x=diff;
				y=0;
			}
			
			cout<<x<<" "<<y<<endl;
		}
		
		else if(x<y)
		{
			diff = y-x;
			int collision = k%4;
			
			if(collision == 1)
			{	x=n-diff;
			 	y=n;		
			}
			else if(collision == 2)
			{	x=n;
			 	y=n-diff;
			}
			else if(collision == 3)
			{	x=diff; 
				y=0;
			}
			else if(collision == 0)
			{	x=0;
				y=diff;
			}
			
			cout<<x<<" "<<y<<endl;
		}
	}
}
