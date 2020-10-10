#include<bits/stdc++.h>
#define max 100010
#define endl "\n"
using namespace std;

int a[max];
vector<int>v;

int prime()
{
	int i,j;
	memset(a,false,sizeof(a));

	for(i=2;i<=sqrt(max);i++)
	{
		if(a[i]==false)
		{
		for(j=2*i;j<=max;j=j+i)
		{
			a[j]=true;
		}

		}
	}

	a[0]=a[1]=true;

	for(i=0;i<=max;i++)
	{
		if(a[i]==false)
			v.push_back(i);
	}

	return 0;
}

int main()
{
	prime();

	int n,k;

	int i;


	scanf("%d %d",&n,&k);

	int count=0;

	for(i=0;v[i]<=n;i++)
	{
		int m=v[i]+v[i+1]+1;
		if(m>n)
			break;
		if(a[m]==false)
		{
			count++;
		}

		if(count==k)
			break;
	}

	if(count==k)
		printf("YES\n");
	else
		printf("NO\n");

	return 0;
}
