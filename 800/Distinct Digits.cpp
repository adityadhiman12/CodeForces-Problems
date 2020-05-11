#include<bits/stdc++.h>
#define ll long long int
using namespace std;

bool check(int a)
{
	string s=to_string(a);
	set<char>SET;
	for(auto i:s)
		SET.insert(i);
	return s.size()==SET.size();	
}

int main()
{
	ll l,r;
	cin>>l>>r;
	int flag=0;
	for(int i=l;i<=r;i++)
	{
		if(check(i))
		{
			cout<<i<<"\n";
			flag=1;
			break;
		}
	}
	if(flag==0)
		cout<<-1<<"\n";
	
}
