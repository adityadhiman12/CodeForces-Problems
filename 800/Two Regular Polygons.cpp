#include<bits/stdc++.h>
#define endl "\n"
#define ll long long int
using namespace std;

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,m;
		cin>>n>>m;
		if(n%m==0)
			cout<<"YES"<<"\n";
		else
			cout<<"NO"<<"\n";	
	}
}
