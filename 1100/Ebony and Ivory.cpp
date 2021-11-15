#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

ll gcd(ll a,ll b)
{
	if( b==0 )
		return a;
	return gcd(b, a%b);	
}

int main()
{
	ll a, b, c;
	cin>>a>>b>>c;
	ll flag=0;
	for (ll i = 0; a * i <= c; ++i)
	{
		if ((c - a * i) % b == 0)
		{
		    printf("Yes\n");
		    return 0;
		}
	}
	cout<<"No"<<endl	
}
