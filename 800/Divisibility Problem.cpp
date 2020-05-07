#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll a,b;
		cin>>a>>b;
		if(a%b==0)
			cout<<0<<"\n";
		else
		{
			int div=a/b;
			cout<<((div*b)+b)-a<<"\n";
		}
	}		
}
