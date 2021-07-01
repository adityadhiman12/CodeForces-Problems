#include<bits/stdc++.h>
#define endl "\n"
#define ll long long int
using namespace std;

 
int main()
{
	set<char>s;
	string str;
	getline(cin,str);
	for(int i=0 ; i<str.length() ; ++i )
	{
		if(str[i]!='{' && str[i]!='}' && str[i]!=' ' && str[i]!=',')
			s.insert(str[i]);
	}
	cout<<s.size();
	
	
}
