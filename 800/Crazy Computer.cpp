#include<bits/stdc++.h>
#define endl "\n"
#define ll long long int 
using namespace std;
int main()
{
	ll n,c;
	cin>>n>>c;
	vector<ll>a(n);
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int count=1;
	for(int i=1;i<n;i++)
	{
		if(a[i]-a[i-1]<=c)
		{
			count++;
		}
		else
			count=1;
	}
	cout<<count<<"\n";
}
