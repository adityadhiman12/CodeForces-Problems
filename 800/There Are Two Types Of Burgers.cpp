#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int b,p,f;
		cin>>b>>p>>f;
		int h,c;
		cin>>h>>c;
		 b /= 2;
        if(h < c){
            swap(h, c);
            swap(p, f);
        }

        int res = 0;

        int cnt = min(b, p);
        b -= cnt, p -= cnt;
        res += h * cnt; 
        
        cnt = min(b, f);
        b -= cnt, f -= cnt;
        res += c * cnt; 
            
        cout << res << endl;
	}
}
