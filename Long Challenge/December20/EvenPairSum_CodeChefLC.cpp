#include <iostream>
#define ll long long 

using namespace std;

/*
int EvenPairSum( ll a, ll b)
{
  int result=0;;
  for(int i=1;i<=a;i++)
  {
  	for(int j=1;j<=b;j++)
  	{
  	   if((i+j)%2==0)	
  	     result++;
	}
  }
  
  return result;	
}
*/

ll EvenPair(ll a, ll b)
{
  ll result=(a*b)/2;
  if((a*b)%2 == 1)
  	result++;
  	
  return result;	
}

int main()
{
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
	int t;
	ll a,b;
	
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		//cout<<EvenPairSum(a,b)<<endl;
		cout<<EvenPair(a,b)<<endl;
		cout<<endl;
	}
	return 0;
}
