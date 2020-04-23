#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    vector<ll>a(4);
    for(int i=0;i<4;i++)
        cin>>a[i];
    sort(a.begin(),a.end());
    cout<<a[3]-a[0]<<" "<<a[3]-a[1]<<" "<<a[3]-a[2]<<"\n";
}
