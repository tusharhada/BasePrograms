#include <iostream>
#define ll long long 
#include <bits/stdc++.h>
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
		ll n, m, sum_a=0, sum_b=0;
		cin>>n>>m;
		
		ll a[n], b[m], idx=0, flag=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			sum_a += a[i];
		}
		
		for(int i=0;i<m;i++)
		{
			cin>>b[i];
			sum_b += b[i];
		}
		
		sort(a, a+n);
		sort(b, b+m, greater<int>());
		
	
		
		for(int i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
		
		for(int i=0;i<m;i++)
		{
			cout<<b[i]<<" ";
		}
		cout<<endl;
		
		cout<<"sum_a =" << sum_a<<"  sum_b ="<<sum_b<<endl<<endl;
		while(true && idx<n && idx<m)
		{
			cout<<"sum_a =" << sum_a<<"  sum_b ="<<sum_b<<endl;
			if(sum_a > sum_b)
			{	
				flag = 1;
				break;	
			}
			
			sum_a += b[idx] - a[idx];
			sum_b += a[idx] - b[idx];
			//cout<<"sum_a =" << sum_a<<"  sum_b ="<<sum_b<<endl;
			
			idx++;
			cout<<"idx ="<<idx<<endl;					
		}
		cout<<"sum_a =" << sum_a<<"  sum_b ="<<sum_b<<endl;
		
		if(flag==1)
			cout<<idx<<endl;
		else
			cout<<"-1"<<endl;		
	}
}
