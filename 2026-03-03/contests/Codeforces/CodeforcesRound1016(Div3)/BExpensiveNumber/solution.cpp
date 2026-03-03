#include <bits/stdc++.h>
using namespace std;

#define int int64_t
#define vi vector<int64_t>
#define all(x) (x).begin(), (x).end()
#define scan(n)                                  \
    ([&]() {                                     \
        vi v(n);                                 \
        for (int i = 0; i < n; i++) cin >> v[i]; \
        return v;                                \
    }())
const char nl = '\n';
const char sp = ' ';
void solve();

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
    bool flag = false;
    int n = s.length();
    int ans = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] != '0' && !flag) {
            flag = true;
            continue;
        }
        if (flag) {
            ans += (s[i] != '0');
        } else {
            ans += (s[i] == '0');
        }
    }
    cout << ans << nl;
}
