#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	int n;
	cin>>n;
	vector<int>a(n+1);
	vector<int>b(n+1);
	vector<int>p(n+1);
	map<int,int>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		p[a[i]]=i;
	}
	for(int i=1;i<=n;i++)
		cin>>b[i];
	int ans=0;
	for(int i=1;i<=n;i++)
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
	cout<<ans<<"\n";
}
