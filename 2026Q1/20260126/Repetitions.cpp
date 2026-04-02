#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007
const char nl = '\n';

void solve() {
    string s;
    getline(cin, s);
    int maxLen = 0;
    int len = 1;
    int n = s.size();
    for (int i = 0; i < n - 1; i++) {
        if (s[i] == s[i + 1]) {
            len++;
        } else {
            maxLen = max(maxLen, len);
            len = 1;
        }
    }
    maxLen = max(maxLen, len);
    cout << maxLen;
}

int main() {
    ll test = 1;
    // cin>>test;
    while (test--) {
        solve();
    }
    return 0;
}