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
    int a, b, c, r;
    cin >> a >> b >> c >> r;
    if (a > b) swap(a, b);
    int left = c - r;
    int right = c + r;
    int ans{-1};
    if (a <= left && right <= b) {
        ans = (b - a) - (right - left);
    } else if (left <= a && b <= right) {
        ans = 0;
    } else if (left <= a && a <= right && right <= b) {
        ans = (b - a) - (right - a);
    } else if (a <= left && left <= b && b <= right) {
        ans = (b - a) - (b - left);
    } else if (right <= a) {
        ans = (b - a);
    } else if (b <= left) {
        ans = (b - a);
    }
    cout << ans << nl;
}
