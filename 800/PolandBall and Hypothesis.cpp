#include<bits/stdc++.h>
#define endl "\n"
#define ll long long int
using namespace std;

bool is_prime(ll n)
{
	for(ll i=2;i*i<=n;i++)
		if(n%i==0)
			return 0;
	return n>1;
}

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    ll m=1;
    while(is_prime(n*m+1))
		m++;
	cout<<m<<endl;
    
}
