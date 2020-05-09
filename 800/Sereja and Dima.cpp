#include<bits/stdc++.h>
using namespace std;


int main()
{
	int n;
	cin>>n;
	vector<int>a(n);
	for(int i=0;i<n;i++)
		cin>>a[i];
	
int f = 0, s = 0;
  int i = 0, j = n-1, c = 0;
  while(i <= j) {
    if(c % 2 == 0) {
      if(a[i] > a[j]) {
        f += a[i];
        i++;
      } else {
        f += a[j];
        j--;
      }
    } else {
      if(a[i] > a[j]) {
        s += a[i];
        i++;
      } else {
        s += a[j];
        j--;
      }
    }
    c++;
  }
  cout<<f<<" "<<s<<"\n";
}
