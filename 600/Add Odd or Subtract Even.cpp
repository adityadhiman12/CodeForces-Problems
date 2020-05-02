#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        if(a==b)
            cout<<0<<"\n";
        else if((a>b && (a-b)%2==0) || ((a<b)&&(b-a)%2!=0))
            cout<<1<<"\n";
        else
            cout<<2<<"\n";
      
    }
}
