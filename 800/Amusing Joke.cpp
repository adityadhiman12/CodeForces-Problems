#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

char a[150],b[150],c[150];
int num[30];
int main(){
	while(cin>>a>>b>>c){
		memset(num,0,sizeof(num));
		ll lena=strlen(a),lenb=strlen(b),lenc=strlen(c);
		for(int i=0;i<lena;++i)num[a[i]-'A']++;
		for(int i=0;i<lenb;++i)num[b[i]-'A']++;
		for(int i=0;i<lenc;++i)num[c[i]-'A']--;
		int f=0;
		for(int i=0;i<27;++i)if(num[i]!=0)f=1;
		if(f)
			cout<<"NO"<<endl;
		else 
			cout<<"YES"<<endl;
	}
	return 0;
}
