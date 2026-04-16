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
    int n;
    cin >> n;
    vector<vector<int>> g(n + 1, vector<int>(n + 1));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> g[i][j];
        }
    }
    vector<bool> used(2 * n + 1);
    vi ans(2 * n + 1);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (used[g[i][j]]) continue;
            ans[i + j] = g[i][j];
            used[g[i][j]] = true;
        }
    }
    for (int i = 1; i <= 2 * n; i++) {
        if (!used[i]) {
            ans[1] = i;
            break;
        }
    }
    for (int i = 1; i <= 2 * n; i++) {
        cout << ans[i] << sp;
    }
    cout << nl;
}
