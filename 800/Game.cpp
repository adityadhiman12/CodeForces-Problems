#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	int n;
	cin>>n;
	vector<ll>a(n);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]%2==0)
			a[i]--;
		cout<<a[i]<<" ";	
	}
		
}
