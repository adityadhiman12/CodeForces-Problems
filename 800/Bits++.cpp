#include<bits/stdc++.h>
#define endl "\n"
#define ll long long int
using namespace std;
int main()
{
	ll n;
	cin>>n;
	ll c=0;
	for(ll i=0;i<n;i++)
	{
		string s;
		cin>>s;
		if(s[1]=='+')
			c++;
		else
			c--;
	}
	cout<<c<<endl;
}
