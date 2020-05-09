#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string a;
	string finalV;
	cin>>a>>finalV;
	int count=0;
	for(int i=0;i<a.length();i++)
	{
		int first=abs((a[i]-'0')-(finalV[i]-'0'));
		int second=abs((a[i]-'0')-(finalV[i]-'0'));
		second=10-second;
		count+= min(first,second) ;
	}		
	cout<<count<<"\n";
}
