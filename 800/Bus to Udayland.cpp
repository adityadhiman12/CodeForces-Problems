#include <bits/stdc++.h>

using namespace std;

int main() 
{
	int n;
	cin>>n;
	char mat[n][5];
	for(int i=0;i<n;i++)
		for(int j=0;j<5;j++)
			cin>>mat[i][j];
	int flag=0;		
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<4;j++)
			if(mat[i][j]==mat[i][j+1] && mat[i][j]=='O')
			{
				mat[i][j]='+';
				mat[i][j+1]='+';
				flag=1;
				break;
			}
		if(flag==1)
			break;	
	}
	if(flag==1)
	{
		cout<<"YES"<<"\n";
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<5;j++)
				cout<<mat[i][j];
			cout<<"\n";	
		}	
	}	
	else
		cout<<"NO"<<"\n";
		
					
}
