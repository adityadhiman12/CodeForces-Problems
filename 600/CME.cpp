#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n==2)
            cout<<2<<endl;
        else if(n%2==0 && n>2)
            cout<<0<<endl;
        else
            cout<<1<<endl;
    }
}
