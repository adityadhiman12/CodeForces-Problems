#include<bits/stdc++.h>
#define endl "\n"
#define ll long long int
using namespace std;

 
int main()
{
	
    vector<ll>a(4);
    for(int i=0;i<4;i++)
    {
		cin>>a[i];
	}
	sort(a.begin(),a.end());
	int count=0;
	for(int i=0;i<3;i++)
	{
		if(a[i]==a[i+1])
			count++;
	}
     cout<<count<<"\n";
    return 0;
}
