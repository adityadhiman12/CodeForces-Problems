#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
 int n;
 cin>>n;
 string s;
 cin>>s;
 sort(s.begin(),s.end());
 int ac=0;
 int dc=0;
 for(int i=0;i<s.length();i++)
 {
     if(s[i]=='A')
        ac++;
    else
        dc++;
 }
 if(ac>dc)
    cout<<"Anton"<<"\n";
else if(dc>ac)
    cout<<"Danik"<<"\n";
    else
        cout<<"Friendship"<<"\n";
}
