#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int n,t;
	
	cin>>t;
	
	while(t--)
	{   int yes=0;
	    cin>>n;
	    for(int i=0;i<n;i++)
	    {
	        char a[1000];
	        cin>>a[i];
	        
	        if(a[i]=='1') yes++;
	    }
	    
	    cout<<yes<<endl;
	     double total=(double)120-n+yes;
	    if((total/120.00)*100.00 >= 75.00)
	        cout<<"YES"<<endl;
	    else
	        cout<<"NO"<<endl;
	}
	
	return 0;
}

