#include<bits/stdc++.h>
#define endl "\n"
#define ll long long int
using namespace std;

int main()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	transform(s.begin(),s.end(),s.begin(),::tolower);
	set<char>seT;
	for(int i=0;i<s.size();i++)
	{
		seT.insert(s[i]);
	}
	if(seT.size()==26)
		cout<<"YES"<<"\n";
	else
		cout<<"NO"<<"\n";
}
