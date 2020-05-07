#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ll n;
	cin>>n;
	int count=0;
	while(n)
	{
		int digit=n%10;
		if(digit==7 || digit==4)
		{
			count++;
		}
		n/=10;
	}
	if(count==7 || count==4)
		cout<<"YES"<<"\n";
	else
		cout<<"NO"<<"\n";
	return 0;	
}
