#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{
	ll t;
	cin >> t;
	while( t-- )
	{
		ll n;
		ll count0 = 0;
		int count1 = 0;
		cin>>n;
		vector<ll>a(n);
		vector<ll>b(n);
		for(ll i=0 ; i<n ; i++)
			cin>>a[i];
		for(ll i=0 ; i<n ; i++)
		{
			cin>>b[i];
			if(b[i] == 0)
				count0++;
			else
				count1++;
		}		
		ll flag=0;
		for( ll i=1 ;i<n; i++ )
		{
			if( a[i]< a[i-1] )			
			{
				flag=1;
				break;
			}
		}	
		if( flag == 0 )
		{
			cout<<"Yes"<<endl;
			continue;
		}
		if( count == 0 || count == 0 )
		{
			cout<<"No"<<endl;
			continue;
		}	
		else
			cout<<"Yes"<<endl;
	}
}
