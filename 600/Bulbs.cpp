#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int n,m;
    cin>>m>>n;
    vector<int>a(n);
    while(m--)
    {
        int k;
        cin>>k;
        vector<int>ys(k);
        for(auto &y:ys)
        {
            cin>>y;
            a[y-1]++;
        }
    }
     for (auto &x : a) {
        if (x <= 0) {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
}
