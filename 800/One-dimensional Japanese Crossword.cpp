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
	vector<int>a;
	int count=0;
	int i;
	for(i=0;i<s.length();i++)
	{
		if(s[i]=='B')
		{
		//	cout<<s[i]<<"\n";
			count++;
		}
		else
		{
	//		cout<<count<<"\n";
			if(count>=1)
				a.push_back(count);
			count=0;	
			
		}
	}
	if(s[i-1]=='B')
		a.push_back(count);
	cout<<a.size()<<"\n";
	for(int i=0;i<a.size();i++)
	cout<<a[i]<<" ";
}
