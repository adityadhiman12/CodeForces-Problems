#include <bits/stdc++.h>
using namespace std;
char last = 'a';
int main() {
    string s;
    cin >> s;
    int ans = 0;
    for(int i =0;i < s.size();i++) {
        ans += min(abs(last-s[i]),26-abs(last-s[i]));
        last = s[i];
    }
    cout << ans;
}
