#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
	string s;
	vector<int>v;
	cin>>s;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]!='+')
		{
			int num=(s[i]-'0');
			v.push_back(num);
		}
	}
	sort(v.begin(),v.end());
	for(int i=0;i<v.size();i++)
	{
		if(i==v.size()-1)
			cout<<v[i];
		else
		{				
			cout<<v[i];
			cout<<"+";
		}
	}	
}
