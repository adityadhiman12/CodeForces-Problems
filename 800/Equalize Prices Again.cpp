#include<bits/stdc++.h>
#define endl "\n"
#define ll long long int
using namespace std;

int main()
{
	int q;
	cin>>q;
	while(q--)
	{
		ll n;
		cin>>n;
		vector<ll>a(n);
		ll sum=0;
		for(ll i=0;i<n;i++)
		{
			cin>>a[i];
			sum+=a[i];
		}	
		cout<<(sum+n-1)/n<<endl;
	}
}
