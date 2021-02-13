#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int c=0;
		bool alice=true;
		int ans=0;
		for(int i=0;i<s.length(); )
		{
			if(s[i]==s[i+1] && s[i]=='1')
			{
				c+=2;
				i+=2;
			}
			else if(s[i]=='1')
			{
				c++;
				i++;
			}
			else
			{
				i++;
			}
			if(c>0)
			{
				if(alice)
				{
					ans+=c;
					alice=false;
					c=0;
				}
				else if(alice==false && c>0)
				{
					alice=true;
					c=0;
				}
				i++;
			}
		}
		cout<<ans<<endl;
	}
}
