#include <bits/stdc++.h>

#include <utility>
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
    int k, a, b, x, y;
    cin >> k >> a >> b >> x >> y;
    if (y < x) {
        swap(a, b);
        swap(x, y);
    }
    int ans = 0;
    if (k >= a) {
        int cnt1 = (k - a) / x + 1;
        ans += cnt1;
        k -= cnt1 * x;
    }

    if (k >= b) {
        int cnt2 = (k - b) / y + 1;
        ans += cnt2;
    }
    cout << ans << nl;
}
