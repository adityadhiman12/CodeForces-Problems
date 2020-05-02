#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
       int hr,min;
       cin>>hr>>min;
       int hrmin=(23-hr)*60;
       int newmin=60-min;
       cout<<hrmin+newmin<<"\n";
    }
}
