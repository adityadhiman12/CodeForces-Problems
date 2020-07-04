#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;
int main()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	int ans=0;
	int cnt=0;
	for(int i = 0; i < s.length(); i++){
        if(s[i] == 'x')cnt++; else cnt = 0;
        if(cnt > 2)ans++;
    }
    
    cout << ans;
}
