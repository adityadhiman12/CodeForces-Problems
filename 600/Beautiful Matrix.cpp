#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int
using namespace std;

int main()
{
 ll mat[5][5];
  int row,col;
  for(ll i=0;i<5;i++)
  {
      for(ll j=0;j<5;j++)
      {
          cin>>mat[i][j];
          if(mat[i][j]==1){
              row=i;
              col=j;
          }
      }
  }
  int rowM=abs(row-2);
  int colM=abs(col-2);
  cout<<(rowM+colM)<<endl;
  return 0;
  
}
