#include<bits/stdc++.h>
#define endl "\n"
#define ll long long int
using namespace std;
int main()
{
	ll n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		string s;
		cin>>s;
		if(s.length()<=10)
			cout<<s<<"\n";
		else
		{
			int count=0;
			for(int i=1;i<s.length()-1;i++)
				count++;
			char f=s[0];
			char l=s[s.length()-1];
			cout<<f;
			cout<<count;
			cout<<l<<endl;
		}
	}
	
	return 0;
}
	
