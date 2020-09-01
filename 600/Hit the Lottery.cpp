#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int
using namespace std;

int main()
{
    ll n;
    cin>>n;
    int a=100;
    int b=20;
    int c=10;
    int d=5;
    int e=1;
    int count=0;
    while(n)
    {
        if(n>=a)
        {
            n-=a;
            count++;
        }
        else if(n>=b)
        {
            n-=b;
            count++;
        }
        else if(n>=c)
        {
            n-=c;
            count++;
        }
        else if(n>=d)
        {
            n-=d;
            count++;
        }
        else
        {
            n-=e;
            count++;
        }
    }
    cout<<count<<endl;
    
}
