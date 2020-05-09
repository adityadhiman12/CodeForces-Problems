#include<bits/stdc++.h>
using namespace std;

int main()
{
	int d1,d2,d3;
	cin>>d1>>d2>>d3;
	d3=min(d3,d1+d2);
	d1=min(d1,d2+d3);
	d2=min(d2,d1+d3);
	cout<<d1+d2+d3<<"\n";
}
