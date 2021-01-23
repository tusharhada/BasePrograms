#include <iostream>

using namespace std;

int main()
{
	int d1,v1,d2,v2,p,days,sum=0;
	cin>>d1>>v1>>d2>>v2>>p;
	
	if(d1>=d2)	
	{
		days=d2;
	}
	else
	{
		days=d1;
	}
	
	while(true)
	{
		if(days>=d1)
			sum+=v1;
		if(days>=d2)
			sum+=v2;
		
		if(sum>=p)
			break;
		days++;
	}
	
	cout<<days<<endl;
}
