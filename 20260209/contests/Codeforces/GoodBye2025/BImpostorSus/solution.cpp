#include <bits/stdc++.h>
using namespace std;

#define int int64_t
#define vi vector<int64_t>
#define all(x) (x).begin(), (x).end()
#define scan inputVector<int64_t>
#define mod 1000000007
const char nl = '\n';
const char sp = ' ';

void solve();
template <typename T>
vector<T> inputVector(int n) {
    vector<T> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    return v;
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int test = 1;
    cin >> test;
    while (test--) {
        solve();
    }
    return 0;
}

void solve() {
    string s;
    cin >> s;
    int ans = 0;
    int n = s.length();
    if (s[0] == 'u') {
        s[0] = 's';
        ans++;
    }
    if (s[n - 1] == 'u') {
        s[n - 1] = 's';
        ans++;
    }
    for (int i = 1; i < n - 1; i++) {
        if (s[i] == s[i - 1] && s[i] == 'u') {
            s[i] = 's';
            ans++;
        }
    }
    cout << ans << nl;
}
