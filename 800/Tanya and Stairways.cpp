#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{
		int n;
		cin>>n;
		vector<int>a(n);
		for(int i=0;i<n;i++)
			cin>>a[i];
		vector<int>finalV;	
		int count=0;
		for(int i=1;i<n;i++)	
		{
			if(a[i]==1)
			{
				finalV.push_back(a[i-1]);
				count++;
			}
		}
		finalV.push_back(a[n-1]);
		count++;
		cout<<count<<"\n";
		for(int i=0;i<finalV.size();i++)
			cout<<finalV[i]<<" ";
}
