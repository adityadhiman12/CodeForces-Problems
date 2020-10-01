#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int sumElements = 0;
		bool odd = false;
		bool even = false;
		for (int i = 0; i < n; ++i) {
			int x;
			cin >> x;
			sumElements += x;
			odd |= x % 2 != 0;
			even |= x % 2 == 0;
		}
		if (sumElements % 2 != 0 || (odd && even)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
