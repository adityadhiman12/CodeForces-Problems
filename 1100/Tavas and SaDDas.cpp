#include<iostream>
#define ll long long int
#define endl "\n"
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ll n;
    cin >> n;   
    vector<int>digs;
    while (n % 10 != 0)
    {
        digs.push_back(n % 10);
        n /= 10;
    }
    reverse(digs.begin(), digs.end());
    int ans = 1;
    for (int i = 0 ; i < digs.size() ; i++)
    {
        ans *= 2;
        if (digs[i] == 7)
        {
            ans++;
        }
    }
    cout << ans - 1 << endl;
}
