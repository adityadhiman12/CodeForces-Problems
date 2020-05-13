#include<bits/stdc++.h>
using namespace std;

int main()
{
	int m,n;
	cin>>m>>n;
	int A,B;
	int ANW;
	for(A=0;A*A<=n;A++);
    for(B=0;B*B<=m;B++);
          ANW=0;
          for(int a=0;a<=A;a++)
               for(int b=0;b<=B;b++)
                    if(a*a+b==n && a+b*b==m)
                         ANW++;
          cout<<ANW<<endl;
}
