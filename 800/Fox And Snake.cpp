#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
 
int main()
{
    ll n,m,i,j;
    cin>>n>>m;
    
    
    
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            for(j=0;j<m;j++)cout<<'#';
            cout<<"\n";
        }
        else if(i%4==1)
        {
            for(j=0;j<m-1;j++)cout<<'.';
            cout<<'#';
            cout<<"\n";
        }
        else
        {
            cout<<'#';
            for(j=0;j<m-1;j++)cout<<'.';
            cout<<"\n";
        }
    }
    
    return 0;
}