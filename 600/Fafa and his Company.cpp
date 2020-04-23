#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
  ll n;
  cin>>n;
  ll total=n;
  ll ways=0;
  for(ll i=1;i<n;i++)
  {
      ll tl=total-i;
      if(i%tl==0)
        ways++;
  }
  cout<<ways<<"\n";
}
