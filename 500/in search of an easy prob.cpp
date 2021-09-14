#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{
    ll n;
    cin>>n;
    vector<ll>a(n);
    ll flag=0;
    for( ll i=0 ; i<n ; ++i )
    {
        cin>>a[i];
        if( a[i] == 1 )
        {
            flag=1;
            cout<<"Hard"<<endl;
		break;
        }
    }
    if(flag == 0)
            cout<<"Easy"<<"\n";
}
