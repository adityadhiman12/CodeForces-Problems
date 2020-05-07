#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{ios_base::sync_with_stdio(0);
	int n;
	cin>>n;
	vector <bool> ok(n+1);
	int x;
	cin>>x;
	for(int i = 0; i < x; i++) {
		int a;
		cin>>a;
		ok[a] = 1;
	}
	cin>>x;
	for(int i = 0; i < x; i++) {
		int a;
		cin>>a;
		ok[a] = 1;
	}
	bool res = true;
	for(int i = 1; i <= n; i++) {
		if(ok[i] == 0) res = false;
	}
	if(res) {
		cout<<"I become the guy."<<endl;
	} else {
		cout<<"Oh, my keyboard!"<<endl;
	}
	
}
