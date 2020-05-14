#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	vector<int>a(n);
	unordered_set<int>s;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		
	}
	for(int i=0;i<n;i++)
	{
		s.insert(a[i]);
	}
	cout<<s.size()<<"\n";
	for(auto i=s.begin();i!=s.end();i++)
		cout<<*i<<" ";
		
}
