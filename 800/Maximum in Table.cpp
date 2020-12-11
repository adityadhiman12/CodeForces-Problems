#include <bits/stdc++.h>
 #define endl "\n"
using namespace std;
 
int main() {
	int n;
	cin>>n;
	int mat[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i==0||j==0)
				mat[i][j]=1;
			else
				mat[i][j]=mat[i-1][j]+mat[i][j-1];
		}
	}
	cout<<mat[n-1][n-1]<<"\n";
}
