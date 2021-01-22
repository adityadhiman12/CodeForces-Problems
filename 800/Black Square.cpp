#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;
int main()
{
	vector<ll>a(5);
	cin>>a[1]>>a[2]>>a[3]>>a[4];
	string s;
	cin>>s;
	int sum = 0;
    for (int i = 0 ;i < s.size(); i ++)
        sum += a[s[i]-'0'];
    cout << sum << endl;
    return 0;
		
}
