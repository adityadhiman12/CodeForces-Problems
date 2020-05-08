#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	  int n,k;
	  cin>>n>>k;
	  vector<int>a(n);
	  for(int i=0;i<n;i++)
		cin>>a[i];
	  int team=0;	
	  int count=0;
	  sort(a.begin(),a.end());
	  for(int i=0;i<n;i++)
	  {
		  if(abs(a[i]-5)>=k)
			count++;
		  if(count==3){
				team++;
				count=0;
			}
	  }
	  cout<<team<<"\n";
	  
	  	 	
}
