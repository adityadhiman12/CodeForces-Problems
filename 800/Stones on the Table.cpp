#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	map<char,int>m;
	int count=0;
	for(int i=0;i<n-1;i++)
	{
		if(s[i]==s[i+1])
			count++;
	}
	cout<<count;
	cout<<"\n";	
}
