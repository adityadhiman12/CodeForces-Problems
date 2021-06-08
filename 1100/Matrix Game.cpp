#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,m;
		cin>>n>>m;
		int mat[n][m];
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
				cin>>mat[i][j];
		set<int>r,c;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(mat[i][j]==1)
				{
					r.insert(i);
					c.insert(j);					
				}
			}
		}
		string winner="Vivek";
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(mat[i][j]==0)
				{
					if(r.find(i)!=r.end() || c.find(j)!=c.end())
						continue;
					else
					{
						if(winner[0]=='V')
							winner="Ashish";
						else
							winner="Vivek";
						r.insert(i);
						c.insert(j);	
					}
				}
			}
		 }
		 cout<<winner<<endl;
	}
}
