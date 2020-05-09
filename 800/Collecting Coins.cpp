#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		vector<int>a(3);
		int n;
		cin>>a[0]>>a[1]>>a[2]>>n;
		sort(a.begin(),a.end());
		n-=2*a[2]-a[1]-a[0];
		if (n<0 || n%3!=0) {
			cout<<"NO"<<"\n";
		} else {
			cout<<"YES"<<"\n";
		}
	}
	
}

