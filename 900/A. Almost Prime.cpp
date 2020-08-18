#include<bits/stdc++.h>
#define endl "\n"
#define n 3001
using namespace std;
int main()
{
	bool arr[n];
	int a[n]={0};
	for(int i=2;i<n;i++)
		if(!arr[i])
			for(int j=2*i;j<n;j+=i)
			{
				arr[j]=1;
				a[j]++;
			}
	int m;
	cin>>m;
	int res=0;
	for(int i=1;i<=m;i++)
	{
		if(a[i]==2)
			res++;	
	}
	cout<<res<<endl;
		 	
}
