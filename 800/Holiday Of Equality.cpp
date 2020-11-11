#include<bits/stdc++.h>
#define endl "\n"
#define ll long long int
using namespace std;
int main(){
	int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a, a + n);
    int mx = a[n - 1];
    ll res = 0;
    for (int i = 0; i < n; ++i) {
        res += mx - a[i];
    }
    cout << res << endl;
    }
