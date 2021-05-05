#include<bits/stdc++.h>
#define endl "\n"
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
		ll n;
		cin>>n;
		vector<ll>a(n);
		ll odd=0;
		ll even=0;
		for(ll i=0 ; i<n ; i++)
		{
			cin>>a[i];
			if(a[i]&1)
				odd++;
			else
				even++;
		}		
		if(odd==n || even==n)
			cout<<"YES"<<endl;
		else 
			cout<<"NO"<<endl;
	}
}
