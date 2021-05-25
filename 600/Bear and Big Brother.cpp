#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{
    ll a,b;
    cin>>a>>b;
    ll year=0;
    while( a<=b )
    {
        year++;
        a*=3;
        b*=2;
    }
    cout<<year<<endl;
}
