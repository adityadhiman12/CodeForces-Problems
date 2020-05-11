#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int>a(n);
	map<int,int>m;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(m.find(a[i])!=m.end())
			m[a[i]]++;
		else
			m[a[i]]=1;
	}	
	int great=0;
	for(auto i=m.begin();i!=m.end();i++)
	{
		if(i->second>great)
			great=i->second;
	}
	cout<<great<<"\n";
}
