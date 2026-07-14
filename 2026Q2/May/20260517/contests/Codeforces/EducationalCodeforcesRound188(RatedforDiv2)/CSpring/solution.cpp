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
#define ceildiv(a, b) (((a) + (b) - 1) / (b))
#define yes() cout << "YES" << nl
#define no() cout << "NO" << nl
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = " << x << nl;
#define vdebug(a)                     \
    cout << #a << " = ";              \
    for (auto x : a) cout << x << sp; \
    cout << nl;
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

int collect(int a, int b, int c, int m) {
    int c1 = m / a;
    int c2 = m / lcm(a, b) + m / lcm(a, c);
    int c3 = m / lcm(lcm(a, b), c);
    return (c1 - c2 + c3) * 6 + (c2 - 2 * c3) * 3 + c3 * 2;
}
void solve() {
    int a, b, c, m;
    cin >> a >> b >> c >> m;
    cout << collect(a, b, c, m) << sp << collect(b, a, c, m) << sp
         << collect(c, b, a, m) << nl;
}
