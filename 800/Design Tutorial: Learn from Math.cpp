#include <iostream>
#define ll long long int
#define endl "\n"
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	if (n & 1)
		cout << 9 << " " << n - 9 << endl;
	else
		cout << n - 4 << " " << 4 << endl;
	return 0;
}
