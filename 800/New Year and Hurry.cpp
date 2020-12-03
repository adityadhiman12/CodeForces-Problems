#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main() {
  int n, p = 0, c = 0;
    cin >> n;
    while (n--)
    {
    	int a;
    	cin >> a;
    	if (a == -1)
    	{
    		if (p > 0)
    			p--;
    		else
    			c++;
		}
		else
			p += a;
    }
    cout << c << '\n';
  return 0;
}
