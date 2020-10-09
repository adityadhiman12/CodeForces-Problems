#include<bits/stdc++.h>
#define endl "\n"
#define ll long long int
using namespace std;

ll max(ll a,ll b)
{
	if(a>b)
		return a;
	return b;
}

int main()
{
    ll n;
    cin>>n;
    if(n%10==0 && n>=0)
		cout<<n<<endl;
	else 
	{
		ll a=n;
		ll b=n;
		a=n/10;
		int d=b%10;
		b/=10;
		b/=10;
		b=(b*10)+d;
		cout<<max(max(a,b),n)<<endl;
		
	}
	
}
