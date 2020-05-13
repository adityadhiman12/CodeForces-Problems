#include<bits/stdc++.h>
using namespace std;
int max(int a,int b)
{
	if(a>b)
		return a;
	return b;
}
int main()
{
	int n;
	cin>>n;
	vector<int>a(n+1);
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	int chest=0;
	int biceps=0;
	int back=0;
	for(int i=1;i<=n;i++)
	{
		int t=a[i];
		int ex=i%3;
		if(ex==1)
			chest+=t;
		else if(ex==2)
			biceps+=t;
		else
			back+=t;	
	}	
	int maxex=max(chest,max(biceps,back));
	if(maxex==chest)
		cout<<"chest"<<"\n";
	else if(maxex==biceps)
		cout<<"biceps"<<"\n";
	else
		cout<<"back"<<"\n";		
}
