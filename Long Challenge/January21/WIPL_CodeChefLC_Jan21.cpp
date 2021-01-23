#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool isSubsetSum(ll set[], ll n, ll sum)
{
    bool subset[n + 1][sum + 1];
    for (int i = 0; i <= n; i++)
        subset[i][0] = true;
 
    for (int i = 1; i <= sum; i++)
        subset[0][i] = false;

    for (int i = 1; i <= n; i++) 
	{
        for (int j = 1; j <= sum; j++) 
		{
            if (j < set[i - 1])
                subset[i][j] = subset[i - 1][j];
            if (j >= set[i - 1])
                subset[i][j] = subset[i - 1][j] || subset[i - 1][j - set[i - 1]];
        }
    }
    
    return subset[n][sum];
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t;
	cin>>t;
	
	while(t--)
	{
		ll n, k, sum=0;
		cin>>n>>k;
		ll arr[n];
		
		for(ll i=0;i<n;i++)
		{
			cin>>arr[i];
			sum+=arr[i];
		}
		
		sort(arr,arr+n, greater<ll>());
		for(ll i=0;i<n;i++)
		{
			cout<<arr[i]<<" ";
		}
		cout<<endl;
		
		if(sum < 2*k || n==1)
		{
			cout<<"-1"<<endl;
		}
		
		else if(sum == 2*k)
		{
			if(isSubsetSum(arr, n, k) == true)
				cout<<n<<endl;
			else 
				cout<<"-1"<<endl;
		}
				
		else if(arr[0]>=k)
		{	ll temp=0;
			for(int i=1;i<n;i++)
			{
				temp += arr[i];
				if(temp>= k)
				{
					cout<<i+1<<endl;
					break;
				}
			}
			//cout<<"-1"<<endl;
		}
		
		else if(sum >= 2*k )
		{
			ll temp =0;
			for(ll i=0;i<n;i++)
			{
				temp+=arr[i];
				if(temp>= 2*k)
				{
					cout<<i+1<<endl;
					break;
				}
			}
		}
		
	}
}
