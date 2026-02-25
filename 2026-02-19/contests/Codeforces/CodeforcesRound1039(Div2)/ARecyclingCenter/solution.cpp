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
    int n, c;
    cin >> n >> c;
    vi a = scan(n);
    int remaining = n;
    vector<bool> visited(n);
    int m = 1;
    int ans = 0;
    while (remaining != 0) {
        int mx = INT_MIN;
        int idx = -1;
        for (int i = 0; i < n; i++) {
            if (visited[i]) continue;
            if (a[i] * m > c) {
                visited[i] = true;
                remaining--;
                ans++;
                continue;
            }
            if (a[i] * m > mx) {
                mx = a[i] * m;
                idx = i;
            }
        }
        if (idx != -1) {
            visited[idx] = true;
            remaining--;
        }
        m = m * 2;
    }
    cout << ans << nl;
}
