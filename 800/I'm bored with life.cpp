#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	int c = a < b ? a : b;
	int f = 1;
	for (int i=2;i<=c;i++) f *= i;
	printf ("%d\n",f);
}
