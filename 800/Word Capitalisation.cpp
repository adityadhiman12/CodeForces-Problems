#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;
int main()
{
	string s;
	cin>>s;
	transform(s.begin(),s.begin()+1,s.begin(),::toupper);
	cout<<s[0];
	for(int i=1;i<s.length();i++)
		cout<<s[i];
	cout<<"\n";	
}
