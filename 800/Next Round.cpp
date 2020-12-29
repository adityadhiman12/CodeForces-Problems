#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	vector<int>a(n+1);
	int count=0;
	int t;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(i==k)
			t=a[k];			
	}
	for(int i=1;i<=n;i++)
	{
		if(a[i]>=t && a[i]>0)
			count++;
	}
	cout<<count<<"\n";
}
		
