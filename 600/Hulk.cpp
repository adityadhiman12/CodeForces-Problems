#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int
using namespace std;

int main()
{
    int n;
    cin>>n;

        string s="";
        for(int i=1;i<=n;i++)
        {
            if(i==n && i%2==0)
                s+=("I love it");
            else if(i==n && i%2!=0)
                s+=("I hate it");
            else if(i%2!=0)
                s+=("I hate that ");
            else
                s+=("I love that ");
            
        }
        cout<<s<<endl;
}
