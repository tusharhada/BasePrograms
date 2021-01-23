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
		int n;
		cin>>n;
		char a[n];
		
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		
		for(int i=0;i<n;i=i+4)
		{
			int sum;
			sum = ((a[i])*8) + (a[i+1]*4) + (a[i+2]*2) + (a[i+3]*1);
			//cout<<((a[i]-'0')*8) << " "<< (a[i+1]*4) << " " << (a[i+2]*2) <<" "<< (a[i+3]*1)<<endl;
			char res=sum-720+97;
			cout<<res;
		}
		
		cout<<endl;
	}
	
}
