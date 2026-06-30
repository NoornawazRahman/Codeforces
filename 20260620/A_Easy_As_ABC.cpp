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
    // cin >> test;
    while (test--) {
        solve();
    }
    return 0;
}

void solve() {
    int n = 3;
    vector<string> s(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
        // cerr << s[i] << nl;
    }
    vector<int> dr = {-1, -1, -1, 0, +1, +1, +1, 0};
    vector<int> dc = {-1, 0, +1, +1, +1, 0, -1, -1};
    string ans = "ZZZ";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k1 = 0; k1 < 8; k1++) {
                int nr1 = i + dr[k1];
                int nc1 = j + dc[k1];
                bool isValid = (nr1 >= 0 && nr1 < n && nc1 >= 0 && nc1 < n);
                if (!isValid) continue;
                for (int k2 = 0; k2 < 8; k2++) {
                    int nr2 = i + dr[k2];
                    int nc2 = j + dc[k2];
                    if (nr1 == nr2 && nc1 == nc2) continue;
                    bool isValid = (nr2 >= 0 && nr2 < n && nc2 >= 0 && nc2 < n);
                    if (!isValid) continue;
                    // string t = "" + s[nr1][nc1] + s[i][j] + s[nr2][nc2];
                    string t = string(1, s[nr1][nc1]) + s[i][j] + s[nr2][nc2];
                    // cerr << t << nl;
                    ans = min(ans, t);
                }
            }
        }
    }
    cout << ans << nl;
}