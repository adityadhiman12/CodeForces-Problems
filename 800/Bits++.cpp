#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int c=0;
	for(int i=0;i<n;i++)
	{
		string s;
		cin>>s;
		if(s[1]=='+')
			c++;
		else
			c--;
	}
	cout<<c<<"\n";
}
