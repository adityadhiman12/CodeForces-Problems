#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{
	int t;
	cin >> t;
	for (int i = 0; i < t; ++i) {
		int a, b, k;
		cin >> a >> b >> k;
		cout << (a - b) * 1ll * (k / 2) + a * (k & 1) << endl;
	}
}
