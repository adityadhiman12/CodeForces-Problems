#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

ll sieve[100005];

int main()
{
	ll n, j;
	cin>>n;
	for(ll i=2; i <= n+1; i++)
	{
		if(!sieve[i])
			for(j=2*i; j<=n+1; j+=i)
				sieve[j]=1;
	}
	
	if(n>2)
		cout<<"2\n";
	else
		cout<<"1\n";

	for(ll i=2; i <= n+1; i++)
	{
		if(!sieve[i])
			cout<<"1";
		else
			cout<<"2";
	}

	return 0;
}
