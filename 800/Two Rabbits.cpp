#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll x,y,a,b;
		cin>>x>>y>>a>>b;
		if((y-x)%(a+b)==0)
			cout<<(y-x)/(a+b)<<"\n";
		else
			cout<<-1<<"\n";	
	}
}
