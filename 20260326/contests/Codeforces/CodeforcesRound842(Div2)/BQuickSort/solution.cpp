#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
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
        vi v(n);                                 \
        for (int i = 0; i < n; i++) cin >> v[i]; \
        return v;                                \
    }())
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = " << x << endl;
#else
#define debug(x)
#endif
#define ceildiv(a, b) (((a) + (b) - 1) / (b))
const char nl = '\n';
const char sp = ' ';
inline void yes() { cout << "YES" << nl; }
inline void no() { cout << "NO" << nl; }
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
    int n, k;
    cin >> n >> k;
    vi p = scan(n);
    int w = 1;
    for (int i = 0; i < n; i++) {
        if (p[i] == w) {
            w++;
        }
    }
    w--;
    int ans = ceildiv(n - w, k);
    cout << ans << nl;
}
