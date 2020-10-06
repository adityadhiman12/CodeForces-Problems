#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
	int n;
	cin >> n;
    int ans = 0;
    int sum = 0;
    for (int i = 1; ; i++) {
        sum += i;
        if (n < sum) break;
        ans = i;
        n -= sum;
    }
    cout << ans << endl;	
}
