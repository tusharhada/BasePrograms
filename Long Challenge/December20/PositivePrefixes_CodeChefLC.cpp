//Positive Prefixes

#include <iostream>
#include <cmath>

using namespace std;

void printMatrix(int *a, int n)
{
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
}

void FindSolution(int *a, int n, int k, int count)
{
	int i=0,sum=0;
	while(true)
		{
			sum+=a[i];
			//cout<<sum<<endl;
			if(sum>0)
			{
				int diff;
				if(count<k)
				{	//negative to positive
					diff = k-count;
					//cout<<"diff:"<<diff<<endl;
					for(int j=n-1;j>=0;j--)
					{
						if(a[j]<0)
						{
							//cout<<"a[j]:"<<a[j]<<" ";
							a[j] = (-1)*a[j];
							//cout<<"a[j]:"<<a[j]<<endl;
							count++;
							//cout<<"count"<<count<<endl;
						}	
						if(count==k)
						{
							//cout<<"count"<<count<<endl;
							//printMatrix(a,n);
							return;
						}
					}
				}
				else if(count>k)
				{
					//positive to negative
					diff = count-k;
					//cout<<"diff:"<<diff<<endl;
					for(int j=n-1;j>=0;j--)
					{
						if(a[j]>0)
						{
							a[j] = (-1)*a[j];
							count--;
						}	
						if(count==k)
						{
							return;
						}
					}
				}
				else
					return;
			}
			else
			{
				i++;
			}
		}
}


int main()
{
	int t,n,k;
	cin>>t;
	
	while(t--)
	{
		cin>>n>>k;
		int a[n],count;
		for(int i=0;i<n;i++)
		{
			a[i]=i+1;
			if(n%2==0)
			{
				if(i%2==0)
					a[i]=(i+1)*(-1);
				count=n/2;
			}
			else
			{
				if(i%2==1)
					a[i]=(i+1)*(-1);
				count= ceil((double)n/2);
			}	
		}	
		
		//cout<<count<<" "<<k<<endl;
		//printMatrix(a,n);
		FindSolution(a,n,k,count);
		printMatrix(a,n);
	}
	
}
