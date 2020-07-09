#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;
int main()
{
	string a,b;
	cin>>a>>b;
	transform(a.begin(),a.end(),a.begin(),::tolower);
	transform(b.begin(),b.end(),b.begin(),::tolower);
	int flag=0;
	for(int i=0;i<a.length();i++)
	{
		if(int(a[i])<int(b[i]))
		{
			cout<<-1<<"\n";
			flag=1;
			break;
		}
		else if(int(a[i])>int(b[i]))
		{
			cout<<1<<"\n";
			flag=1;
			break;
		}				
	}	
	if(flag==0)
		cout<<0<<"\n";
}
