#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,x,a,b;
		cin>>n>>x>>a>>b;
		cout<<min(abs(a-b)+x,n-1)<<endl;
	}
}
