#include<bits/stdc++.h>
#define endl "\n"
#define ll long long int   
using namespace std;

int main()
{
	ll t;
	cin>>t;
	while( t-- )
	{
		string s;
		cin>>s;
		ll ones=0;
		ll zeroes=0;
		for(ll i=0 ;i<s.length(); i++)
		{
			if(s[i] == '0')
				zeroes++;
			else
				ones++;
		}
		ll ans=min(zeroes,ones);
		ll done0s=0;
		ll done1s=0;
		for( ll i=0 ; i < s.length() ; i++ )
		{
			if(s[i] == '0')
			{
				done0s++;
				zeroes--;
			}
			if( s[i] == '1' )
			{
				done1s++;
				ones--;
			}
			ans=min(ans,done1s+zeroes);
			ans=min(ans,done0s+ones);
		}
		
		cout<<ans<<endl;		
	}
}	
