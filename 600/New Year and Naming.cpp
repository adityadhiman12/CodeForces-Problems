#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<string>a(n);
    vector<string>b(m);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    int t;
    cin>>t;
    while(t--)
    {
        int num;
        cin>>num;
        num--;
        cout<<a[num%n];
        cout<<b[num%m];
        cout<<endl;
    }
}
