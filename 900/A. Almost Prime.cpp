#include<bits/stdc++.h>
#define endl "\n"
#define ll long long int
#define n 3001
using namespace std;
int main()
{
	bool arr[n];
	ll a[n]={0};
	for(ll i=2;i<n;i++)
		if(!arr[i])
			for(int j=2*i;j<n;j+=i)
			{
				arr[j]=1;
				a[j]++;
			}
	ll m;
	cin>>m;
	int res=0;
	for(ll i=1;i<=m;i++)
	{
		if(a[i]==2)
			res++;	
	}
	cout<<res<<endl;
		 	
}
