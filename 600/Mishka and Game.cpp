#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int n;
    cin>>n;
    int c1=0;
    int c2=0;
    while(n--)
    {
        int a,b;
        cin>>a>>b;    
        if(a>b)
            c1++;
        else if(a<b)
            c2++;
    }
    if(c1>c2)
        cout<<"Mishka"<<"\n";
    else if(c1==c2)
        cout<<"Friendship is magic!^^"<<"\n";
    else
        cout<<"Chris"<<"\n";
}
