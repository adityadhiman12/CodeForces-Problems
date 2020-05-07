#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int mat[n][3];
	for(int i=0;i<n;i++)
	{
		cin>>mat[i][0];
		cin>>mat[i][1];
		cin>>mat[i][2];
	}
	int count=0;
	for(int i=0;i<n;i++)
	{
		int c=0;
		for(int j=0;j<3;j++)
		{
			if(mat[i][j]!=0)
				c++;
		}
		if(c>=2)
			count++;
	}
	cout<<count<<"\n";		
		
}
