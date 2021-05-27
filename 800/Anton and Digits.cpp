#include<bits/stdc++.h>
#define endl "\n"
#define ll long long int 
using namespace std;
	
	int main()
	{
		ll a,b,c,d;	
		cin >> a >> b >> c >> d;
		ll kp = min(a, min(c, d));
		cout << kp * 256 + min(a - kp, b) * 32;
		return 0;
    	}
