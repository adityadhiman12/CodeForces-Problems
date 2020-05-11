#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll x,y,z;
	cin>>x>>y>>z;
	ll a,b,c;
	cin>>a>>b>>c;
	if(x>a)
		cout<<"NO"<<"\n";
	else
	{
		a-=x;
		int tot=a+b;
		if(y>tot)
			cout<<"NO"<<"\n";
		else
			{
				tot-=y;
				tot+=c;
				if(z>tot)
					cout<<"NO"<<"\n";
				else
					cout<<"YES"<<"\n";	
			}	
	}	
}
