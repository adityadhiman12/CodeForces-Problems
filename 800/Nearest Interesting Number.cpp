#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int ans;
	int flag=1;
	while(flag)
	{
		int sum=0;
		int num=n;
		while(num)
		{
			sum+=num%10;
			num/=10;
		}
		if(sum%4==0){
			ans=n;
			flag=0;
		}
		n++;			
	}
	cout<<ans<<"\n";
}
