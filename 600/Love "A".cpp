#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    string s;
    cin>>s;
    int a=0;
    int x=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='a')
            a++;
        else
            x++;
    }
    int count=0;
    if(a>x)
        cout<<s.length()<<"\n";
    else
    {
        while(x>=a){
            x--;
            count++;
        }
        cout<<s.length()-count<<"\n";
    }
}
