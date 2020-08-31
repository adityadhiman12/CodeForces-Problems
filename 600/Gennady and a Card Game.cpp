#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int
using namespace std;

int main()
{
   string card;
   cin>>card;
   int flag=0;
   for(int i=0;i<5;i++)
   {
       string x;
       cin>>x;
       if(x[0]==card[0] || x[1]==card[1])
       {
           cout<<"YES"<<endl;
           flag=1;
           break;
       }
   }
   if(flag==0)
        cout<<"NO"<<endl;
}
