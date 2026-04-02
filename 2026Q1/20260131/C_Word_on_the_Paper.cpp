#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define scan inputVector<int>
#define mod 1000000007
const char nl = '\n';
const char sp = ' ';

template <typename T>
vector<T> inputVector(int n) {
    vector<T> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    return v;
}

void solve();

int main() {
    ll test = 1;
    cin >> test;
    while (test--) {
        solve();
    }
    return 0;
}

void solve() {
    string s;
    string ans;
    for (int i = 0; i < 8; i++) {
        cin >> s;
        for (int i = 0; i < 8; i++) {
            if (s[i] != '.') {
                ans += s[i];
            }
        }
    }
    cout << ans << nl;
}