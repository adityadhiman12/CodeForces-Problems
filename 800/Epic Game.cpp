#include<bits/stdc++.h>
#define endl "\n"
#define ll long long int
using namespace std;
int main()
{
	vector<int>a(2);
	int k;
	cin>>a[0]>>a[1]>>k;
	int flag=1;
	int win;
	while(flag)
	{
		for(int i=0;i<2;i++)
		{
			int temp=__gcd(a[i],k);
			if(temp<k){
				k-=temp;
				if(i==0)
					win=1;
				else
					win=0;		
			}
			else
				flag=0;
		}
	}
	cout<<win<<"\n";
}
