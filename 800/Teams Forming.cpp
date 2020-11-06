#include<bits/stdc++.h>
#define endl "\n"
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
	sort(a.begin(),a.end());
	int prob=0;
	for(int i=1;i<n;i+=2)
	{
		prob+=(a[i]-a[i-1]);
	}
	cout<<prob<<"\n";
}
