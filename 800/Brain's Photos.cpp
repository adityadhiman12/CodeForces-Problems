#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;
int main()
{
	int n,m;
	cin >> n>>m;
    char mat[n][m];
    int colored=0;
    int mono=0;
    for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
		{
			cin>>mat[i][j];
			if(mat[i][j]=='W' || mat[i][j]=='B' || mat[i][j]=='G')
				mono++;
			else
				colored++;
		}
	if(colored>0)
		cout<<"#Color"<<"\n";
	else
		cout<<"#Black&White"<<"\n";		
			
}
