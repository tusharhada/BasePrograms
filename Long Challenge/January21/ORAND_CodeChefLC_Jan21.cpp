#include <iostream>
#include <bits/stdc++.h>
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
		ll n,m;
		cin>>n>>m;
		ll a[n],b[m];
		
		for(ll i=0;i<n;i++)
			cin>>a[i];
		for(ll i=0;i<m;i++)
			cin>>b[i];
			
		set<ll> s1;
		stack<ll> s;
		
		s1.insert(0);
		s.push(0);
		
		while(!s.empty())
		{
			ll x=s.top();
			s.pop();
			for(ll i=0;i<n;i++)
			{
				ll y=a[i];
				//auto temp=s1.find(x|y);
				if(!s1.count(x|y))
				{
					s1.insert(x|y);
					s.push(x|y);
				}
			}
			
			for(ll i=0;i<m;i++)
			{
				ll y=b[i];
				//auto temp = s1.find(x&y);
				if(!s1.count(x&y))
				{
					s1.insert(x&y);
					s.push(x&y);
				}
			}
		}
		cout<<s1.size()<<endl;
	}
}
