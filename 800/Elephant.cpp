#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	int n;
	cin>>n;
	int count=0;
	while(n>0)
	{
		
		if(n-5>=0)
		{
			n-=5;
			count++;
		}			
		else if(n-4>=0)
		{
			n-=4;
			count++;
		}			
		else if(n-3>=0)
		{
			n-=3;
			count++;
		}			
		else if(n-2>=0)
		{
			n-=2;
			count++;
		}			
		else
		{
			n-=1;	
			count++;
		}	
	}
	cout<<count<<"\n";
	return 0;	
}
