#include <iostream>
#define ll long long int
#include<bits/stdc++.h>
using namespace std;
 
int cnt[256];
int main() {
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); i++) cnt[s[i]]++;
        for (int i = 255; i >= 0; i--) {
                if (cnt[i] == 0) continue;
                for (int j = 0; j < cnt[i]; j++) cout << (char)i;
                break;
        }
}
