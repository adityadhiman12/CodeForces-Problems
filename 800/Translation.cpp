#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	string a;
	string b;
	cin>>a>>b;
	reverse(a.begin(),a.end());
	if(a==b)
		cout<<"YES"<<"\n";
	else
		cout<<"NO"<<"\n";
}
