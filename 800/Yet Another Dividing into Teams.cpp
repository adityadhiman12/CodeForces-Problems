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
		int n;
		cin>>n;
		vector<int>a(n);
		for(int i=0;i<n;i++)
			cin>>a[i];
		int flag=0;	
		sort(a.begin(),a.end());
		for(int i=1;i<n;i++)
		{
			if(a[i]-a[i-1]==1)
			{
				cout<<2<<endl;
				flag=1;
				break;
			}
		}	
		if(flag==0)
			cout<<1<<endl;
			
	}
}
