#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        if(b == a)
            cout<< 0 <<endl;
        else if((a>b && (a-b) % 2 == 0) || ((a<b)&&(b-a)%2!=0))
            cout<<1<<endl;
        else
            cout<<2<<endl;
      
    }
}
