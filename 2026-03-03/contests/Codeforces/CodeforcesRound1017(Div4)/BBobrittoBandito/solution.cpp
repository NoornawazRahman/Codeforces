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
    int n, m, l, r;
    cin >> n >> m >> l >> r;
    if (m < abs(l) && m < r) {
        cout << 0 << sp << m << nl;
        return;
    }
    if (m > abs(l)) {
        cout << l << sp << (m - abs(l)) << nl;
    } else {
        cout << (m - r) * (-1) << sp << r << nl;
    }
}
