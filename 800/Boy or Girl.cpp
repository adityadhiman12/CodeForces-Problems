#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
	string s;
	cin>>s;
	set<char>k;
	for(int i=0;i<s.length();i++)
	{
		k.insert(s[i]);
	}
	if(k.size()%2!=0)
		cout<<"IGNORE HIM!"<<"\n";
	else
		cout<<"CHAT WITH HER!"<<"\n";
		
}
