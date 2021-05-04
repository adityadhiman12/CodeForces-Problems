#include<bits/stdc++.h>
#define endl "\n"
#define ll long long int
using namespace std;

bool check(int n)
{
    ll c[10];
    for(ll i=0; i<10; ++i) c[i]=0;
    while(n>0){
        if(c[n%10]++)return false;
        n/=10;
    }
    return true;
}
    
    int main()
    {
        ll x;
        scanf("%d",&x);
        while(++x) if(check(x)) return 0&printf("%d\n",x);
        return 0;
    }
