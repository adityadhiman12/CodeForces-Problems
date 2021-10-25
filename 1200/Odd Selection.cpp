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
		ll n,x;
		cin>>n>>x;
		vector<ll>a(n);
		int odd=0;
		ll even=0;
		for(int i=0; i<n ; i++)
		{
			cin>>a[i];
			if( a[i]%2 == 1 )
				odd++;
			else
				even++;
		}
		ll flag=0;
		for(ll i=1;i<=odd && i<=x;i+=2)
		{
			int need=x-i;
			if(need<=even)
				flag=1;
		}
		if(flag==1)
			cout<<"Yes"<<endl; 
		else
			cout<<"No"<<endl;
	}
	return 0;
}	
