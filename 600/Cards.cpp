#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    int zero=0;
    int one=0;
    for(int i=n-1;i>=0;i--)
    {
        if(s[i]=='z')
            zero++;
        else if(s[i]=='n')
            one++;
    }
    while(one--)
    {
        cout<<1<<" ";
    }
    while(zero--)
    {
        cout<<0<<" ";
    }
    cout<<"\n";
}
