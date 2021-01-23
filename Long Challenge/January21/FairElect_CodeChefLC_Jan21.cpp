#include <iostream>
#include <bits/stdc++.h>
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
		
		while(true)
		{
		        
		    if(sum_a > sum_b)
			{	
			    flag = 1;
			    break;
			}
			
			if(idx>=m || idx>=n)
				break;
			
			sum_a += b[idx] - a[idx];
			sum_b += a[idx] - b[idx];
			
			idx++;
		}
		
		if(flag==1)
			cout<<idx<<endl;
		else
			cout<<"-1"<<endl;		
	}
}
