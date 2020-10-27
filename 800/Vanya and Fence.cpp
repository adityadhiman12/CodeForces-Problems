#include<bits/stdc++.h>
#define endl "\n"
#define ll long long int
using namespace std;
int main()
{
    ll n,h;
    cin>>n>>h;
    vector<int>v(n);
    vector<int>finalV;
    for(int i=0;i<n;i++)
    {
		cin>>v[i];
	}
	for(int i=0;i<n;i++)
	{
		if(v[i]<=h)
			finalV.push_back(v[i]);
		else
		{
			int count=0;
			while(v[i]>h)
			{
				v[i]-=h;
				count+=2;
			}
			while(count--)
			{
				finalV.push_back(1);
			}			
		}
	}
	cout<<finalV.size()<<"\n";
    return 0;
}
