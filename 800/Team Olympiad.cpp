#include <bits/stdc++.h>
 using namespace std;
 
int main() {
	int n;
	cin>>n;
	vector<int > a, b, c; 
    for(int i=0; i<n; i++)
    {
		int m;
        cin>>m;
        if(m==1) a.push_back(i+1);
        if(m==2) b.push_back(i+1);
        if(m==3) c.push_back(i+1);
    }
    int ans=min(a.size(), min(b.size(), c.size()));
    cout<<ans<<'\n';
    for(int i=0; i<ans; i++){
        cout<<a[i]<<' '<<b[i]<<' '<<c[i]<<'\n';
    }		
}
