#include <iostream>
#include <bits/stdc++.h>
#include <vector>
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
		int n, k, sum=0;
		cin>>n>>k;
		int arr[n];
		
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		
		sort(arr,arr+n);
		vector<int> h1;
		h1.push_back(arr[n-1]);
		sum = arr[n-1];
		int result = -1;
		
		for(int i=n-2;i>=0;i--)
		{
			vector<int> h2;
			sum+= arr[i];
			
			int flag =0;
			for(auto it=h1.begin(); it!= h1.end(); ++it)
			{
				int p = (int)*it;
				h2.push_back(p);
				if(flag==0) {h2.push_back(arr[i]);}
				h2.push_back(arr[i] + p);
				flag =1;
				
				/*cout<<"\nSUM: "<<sum<<endl;
				cout<<"p: "<<p<<"\narr["<<i<<"]: "<<arr[i]<<"\np+arr[" <<i<<"]: "<< (p+arr[i])<<endl;
				cout<<"result: "<<result<<endl;
				
				cout<<"h2: ";
				for(int i=0;i<h2.size();i++)
					cout<<h2[i]<<" ";
				
				cout<<endl;	
				cout<<"h1: ";
				for(int i=0;i<h1.size();i++)
					cout<<h1[i]<<" ";
				cout<<endl;
				*/
				
				if((p+arr[i] >= k) && (sum-p-arr[i] >= k) )
				{
					result = n-i; break;
				}
				
				if((arr[i]>=k) && (sum-arr[i] >= k))
				{
					result = n-i; break;
				}
			}
			
			if(result != -1)
				break;
				
			h1 = h2;
		}
		
		cout<<result<<endl;
	}
}
