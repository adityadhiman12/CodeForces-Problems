#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x,a,b;
		cin>>n>>x>>a>>b;
		cout<<min(n-1,abs(a-b)+x)<<"\n";
	}
}
