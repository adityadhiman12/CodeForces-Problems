#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll m,n;
		cin>>m>>n;
		if(m==1 || n==1 || (m==2 && n==2))
			cout<<"YES"<<"\n";
		else
			cout<<"NO"<<"\n";	
	}
}
