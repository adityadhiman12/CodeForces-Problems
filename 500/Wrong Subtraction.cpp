#include<bits/stdc++.h>
#define endl "\n"
#define ll long long int
using namespace std;

int main()
{
    ll n,k;
    cin>>n>>k;
    for(ll i=0;i<k;i++)
    {
        if( n % 10 != 0 )
            n=n-1;
        else
            n/=10;
    }
    cout<<n<<endl;  
}
