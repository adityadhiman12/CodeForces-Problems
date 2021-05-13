#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{
	ll n;
	cin>>n;
	vector<ll>a(n+1);
	vector<ll>b(n+1);
	vector<int>p(n+1);
	map<int,int>m;
	for(ll i=1;i<=n;i++)
	{
		cin>>a[i];
		p[a[i]]=i;
	}
	for(ll i=1;i<=n;i++)
		cin>>b[i];
	ll ans=0;
	for(ll i=1 ; i<=n ; ++i)
	{
		int x=p[b[i]]-i;
		if(x<0)
			x+=n;
		m[x]++;		
	}
	for(auto i:m)
	{
		ans=max(ans,i.second);
	}
	cout<<ans<<endl;
}
