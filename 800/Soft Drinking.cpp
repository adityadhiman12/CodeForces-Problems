#include<bits/stdc++.h>
using namespace std;

int main()
{
	int  n, k, l, c, d, p, nl, np;
       cin>> n>> k>> l>> c>> d>> p>> nl>> np;
       int kl = k*l;
       int cd = c*d;
       int a1 = kl/nl;
       int a2 = p/np;
       cout<<min(min(a1,a2),cd)/n<<"\n";
}
