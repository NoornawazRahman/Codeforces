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
int parity(int n) { return (n & 1); }
void solve() {
    int n;
    cin >> n;
    vi a = scan(n);
    sort(all(a));
    if (parity(a[0]) == parity(a[n - 1])) {
        cout << 0 << nl;
        return;
    }
    int left = -1;
    int right = -1;
    for (int i = 1; i < n; i++) {
        if (parity(a[i]) != parity(a[0])) {
            left = i;
            break;
        }
    }
    for (int i = n - 2; i >= 0; i--) {
        if (parity(a[i]) != parity(a[n - 1])) {
            right = i;
            break;
        }
    }
    debug(left);
    debug(right);
    int ans = min(left, n - right - 1);
    cout << ans << nl;
}
