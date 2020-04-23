#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        if(s[s.length()-1]=='o')
            cout<<"FILIPINO"<<"\n";
        else if(s[s.length()-1]=='u')
            cout<<"JAPANESE"<<"\n";    
        else 
            cout<<"KOREAN"<<"\n";    
    }
}
