#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int>a(n);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int count=1;
	for(int i=0;i<n-1;i++)
	{
		if(a[i]!=a[i+1])
			count++;			
	}
	cout<<count<<"\n";	
}
