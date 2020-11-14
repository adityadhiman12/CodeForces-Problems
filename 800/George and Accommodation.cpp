#include<bits/stdc++.h>
#define endl "\n"
#define ll long long int
using namespace std;
int main()
{
	int n;
	cin>>n;
	int count=0;
	for(int i=0;i<n;i++)
	{
		int a,b;
		cin>>a>>b;
		if(b-a>=2)
		{
			count++;
		}
	}
	cout<<count<<"\n";	
}
