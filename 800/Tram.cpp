#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int max=INT_MIN;
	int count=0;
	for(int i=0;i<n;i++)
	{
		int a,b;
		cin>>a>>b;
		count-=a;
		count+=b;
		if(count>max)
			max=count;
	}
	cout<<max<<"\n";
	return 0;	
}
