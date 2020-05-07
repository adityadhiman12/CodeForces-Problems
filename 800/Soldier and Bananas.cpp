#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k,n,w;
	cin>>k>>n>>w;
	int s=(w+1)*w/2*k;
    if (s<=n)
        cout<<0<<endl;
    else
        cout<<s-n<<endl;
	return 0;
}
