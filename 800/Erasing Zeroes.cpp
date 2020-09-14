#include<bits/stdc++.h>
#define endl "\n"
#define ll long long int
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		ll cnt=0,ans=0,cn=0;
        int k=0,j=0;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            if(cn==0 && s[i]=='1')
            cn=1;
            
            if(cn==1 && s[i]=='1')
            {
                if(k==1)
                {
                    ans+=j;  
                    j=0;
                    k=0;
                }
                cnt++;
            }
            else if(cnt!=0)
            {
                k=1;
                j++;
            }
           
        }
        cout<<ans<<endl;
	}
}
