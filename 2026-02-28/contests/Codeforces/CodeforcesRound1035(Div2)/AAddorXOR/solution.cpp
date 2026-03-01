#include <bits/stdc++.h>
using namespace std;

#define int int64_t
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
    int a, b, x, y;

    cin >> a >> b >> x >> y;
    if (a > b) {
        if ((a ^ 1) == b) {
            cout << y << nl;
        } else {
            cout << -1 << nl;
        }
        return;
    }
    if (a == b) {
        cout << 0 << nl;
        return;
    }

    int ans = 0;
    while (a != b) {
        if ((a & 1) == 0) {
            ans = ans + min(x, y);
        } else {
            ans = ans + x;
        }
        a++;
    }
    cout << ans << nl;
}
