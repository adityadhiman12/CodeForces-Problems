#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	int j=1;
	for(int i=0;i<s.length();i+=j)
	{
		cout<<s[i];
		j++;
	}
	
}
