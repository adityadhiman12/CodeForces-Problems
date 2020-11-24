#include<bits/stdc++.h>
#define endl "\n"
#define ll long long int
using namespace std;

int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	    cout << min(a + 2, min(b + 1, c)) * 3 - 3;
}
