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
#define scan(n)                                  \
    ([&]() {                                     \
        vector<int> v(n);                        \
        for (int i = 0; i < n; i++) cin >> v[i]; \
        return v;                                \
    }())
#define ceildiv(a, b) (((a) + (b) - 1) / (b))
#define yes() cout << "YES" << nl
#define no() cout << "NO" << nl
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = " << x << nl;
#define vdebug(a)                     \
    cerr << #a << " = ";              \
    for (auto x : a) cerr << x << sp; \
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
    int n;
    string s;
    cin >> n >> s;
    int c0 = 0;
    for (int i = 0; i < n; i++) {
        c0 += (s[i] == '0');
    }
    int c1 = n - c0;
    vector<int> ans;
    if (c0 % 2 == 1) {
        for (int i = 0; i < n; i++) {
            if (s[i] == '0') {
                ans.push_back(i + 1);
            }
        }
    }
    if (c0 % 2 == 0 && c1 % 2 == 0) {
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                ans.push_back(i + 1);
            }
        }
    }
    if (c0 % 2 == 0 && c1 % 2 == 1) {
        ans.push_back(-1);
    }
    if (ans.size() == 0 || ans[0] != -1) {
        cout << ans.size() << nl;
    }
    print(ans);
}
