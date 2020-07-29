#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	   int n,m,x,y;
	   cin>>n>>m>>x>>y;
	   char a[n][m];
	   int cost=0;
	   int p=min(y,2*x);
	   for(int i=0;i<n;i++)
	   {
	       for(int j=0;j<m;j++)
		   {
	            cin>>a[i][j];
		   }
	   }
	   for(int i=0;i<n;i++)
	   {
	       for(int j=0;j<m-1;j++)
	       {
	           if(a[i][j]=='.')
	            {
					if(a[i][j+1]=='.')
					{
						cost+=p;
				// 		cout<<cost<<"\n";
						a[i][j+1]='*';
					}
					else
						cost+=x;
	            }
		   }
		   if(a[i][m-1]=='.')
				cost+=x;
	   }
	   cout<<cost<<"\n";
	            
	            
	   
	}
	return 0;
}
