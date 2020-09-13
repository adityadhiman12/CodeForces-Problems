#include<bits/stdc++.h>
#define ll long long int ll 
#define endl "\n"
using namespace std;

const int N=11;
 
int n,m;
int r[N],c[N];
int ans;
 
int main()
{
	cin>>n>>m;
	for(int i=0;i<n;++i)
		for(int j=0;j<m;++j)
		{
			char ch;
			cin>>ch;
			if(ch=='S')
				r[i]=c[j]=1;
		}
	ans=n*m;
	for(int i=0;i<n;++i)
		for(int j=0;j<m;++j)
			if(r[i] && c[j])
				--ans;
	cout<<ans<<endl;
	return 0;
}
