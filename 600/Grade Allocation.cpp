#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int m;
        cin>>n>>m;
        int s=0;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            s+=x;
        }
        cout<<min(s,m)<<endl;
    }
}
