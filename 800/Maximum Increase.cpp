#include<bits/stdc++.h>
#define endl "\n"
#define ll long long int
using namespace std;

int main()
{
	ll n;
	cin>>n;
	vector<ll>a(n);
	for(int i=0;i<n;i++)
		cin>>a[i];
	int cur=1;	
	int maxC=1;
	for(int i=0;i<n-1;i++)	
	{
		if(a[i]<a[i+1])
		{
			cur++;
			if(cur>maxC)
				maxC=cur;
		}
		else
			cur=1;			
	}
	cout<<maxC<<"\n";
}
