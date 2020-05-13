#include<bits/stdc++.h>
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
		int sum=0;
		int num=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			sum+=a[i];
			if(a[i]==0)
				num++;
		}
		if(sum+num==0)	
			num++;
		cout<<num<<"\n";		
	}
}
