#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	int q;
	cin>>q;
	while(q--)
	{
		ll l1,r1,l2,r2;
		cin>>l1>>r1>>l2>>r2;
		if(l1==l2)
			cout<<l1<<" "<<l1+1<<"\n";
		else 
			cout<<l1<<" "<<l2<<"\n";
	}
}
