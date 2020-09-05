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
        string s;
        cin>>s;
        if(s[s.length()-1]=='o')
            cout<<"FILIPINO"<<endl;
        else if(s[s.length()-1]=='u')
            cout<<"JAPANESE"<<endl;    
        else 
            cout<<"KOREAN"<<endl;    
    }
}
