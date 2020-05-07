#include<bits/stdc++.h>
using namespace std;
int f[4];
 
int main()
{
    cin>>f[1]>>f[2]>>f[3];
    sort(f+1,f+3+1);
    cout<<f[3]-f[1]<<endl;
    return 0;
}
