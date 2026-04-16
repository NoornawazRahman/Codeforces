#include <bits/stdc++.h>
using namespace std;

#define int int64_t
#define vi vector<int64_t>
#define all(x) (x).begin(), (x).end()
#define umap unordered_map
#define uset unordered_set
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
    int n, k;
    cin >> n >> k;
    vi a = scan(n);
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == 1) continue;
        int len = 0;
        for (int j = i; j < i + k && j < n; j++) {
            if (a[j] == 1) break;
            len++;
        }
        if (len == k) {
            ans++;
        }
        i = i + len;
    }
    cout << ans << nl;
}
