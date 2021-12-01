#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int
using namespace std;

int main()
{
    ll n;
    cin>>n;
    map<char, ll>m;
    m.insert({'T', 4});
    m.insert({'C', 6});
    m.insert({'O', 8});
    m.insert({'D', 12});
    m.insert({'I', 20});
    ll faces=0;
    for(ll i=0 ; i<n ; i++ )
    {
        string s;
        cin>>s;
        if( m.find(s[0]) != m.end() ){
            faces+=m[s[0]];
        }
    }
    cout<<faces<<"\n";
}
