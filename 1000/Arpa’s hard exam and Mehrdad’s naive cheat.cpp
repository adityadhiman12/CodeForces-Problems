#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{
	ll n;
	cin>>n;
	ll res=1;
	ll a=8;
	while( n != 0 )
	{
		if(n % 2 == 1)
		{
			res=((res)*(a))%10;
			n--;
		}
		else
		{
			a=(a*a)%10;
			n/=2;
		}
	}	
	cout<<res<<endl;
}
