#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	int n,m,k;
	cin>>n>>m>>k;
	vector<int>a(10005);
	for(int i=0;i<=m;i++)
		cin>>a[i];
	int ans=0;
	for(int i=0;i<m;i++)
	{
		if(__builtin_popcount(a[i]^a[m])<=k)
			ans++;
	}	
	cout<<ans<<"\n";
}
