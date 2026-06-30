#include <bits/stdc++.h>
using namespace std;

#define int long long
#define all(x) (x).begin(), (x).end()
#define umap unordered_map
#define uset unordered_set
#define print(v)                               \
    ([&]() {                                   \
        int n = v.size();                      \
        for (int i = 0; i < n; i++) {          \
            cout << v[i] << " \n"[i == n - 1]; \
        }                                      \
    }())
#define scan(n)                     \
    ([&]() {                        \
        vector<int> v(n);           \
        for (int i = 0; i < n; i++) \
            cin >> v[i];            \
        return v;                   \
    }())
#define ceildiv(a, b) (((a) + (b) - 1) / (b))
#define yes() cout << "YES" << nl
#define no() cout << "NO" << nl
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = " << x << nl;
#define vdebug(a)        \
    cerr << #a << " = "; \
    for (auto x : a)     \
        cerr << x << sp; \
    cerr << nl;
#else
#define debug(x)
#define vdebug(a)
#endif
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
    int n = s.size();
    string ans;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'B') {
            for (int j = ans.size() - 1; j >= 0; j--) {
                if (ans[j] >= 'A' && ans[j] <= 'Z') {
                    ans.erase(j, 1);
                    break;
                }
            }
        } else if (s[i] == 'b') {
            for (int j = ans.size() - 1; j >= 0; j--) {
                if (ans[j] >= 'a' && ans[j] <= 'z') {
                    ans.erase(j, 1);
                    break;
                }
            }
        } else {
            ans += s[i];
        }
        // cerr << ans << nl;
    }
    cout << ans << nl;
}