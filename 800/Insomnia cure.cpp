#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ll n;
	cin>>n;
	double sum=0;
	for(int i=0;i<n;i++)
	{
		int t;
		cin>>t;
		sum+=(t);
	}
	cout<<fixed<<setprecision(4)<<(sum/(n*100))*100<<endl;
}
