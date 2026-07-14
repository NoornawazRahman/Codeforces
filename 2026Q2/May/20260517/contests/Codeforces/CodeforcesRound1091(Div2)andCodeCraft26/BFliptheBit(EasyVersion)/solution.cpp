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
        for (int i = 1; i < n; i++) cin >> v[i]; \
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

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a = scan(n + 1);
    int p;
    cin >> p;
    vector<int> b(n + 2, 1);

    for (int i = 1; i <= n; i++) {
        b[i] = (a[i] == a[p]);
    }
    int x1 = 0, x2 = 0;

    // boundaries in [0, p-1]
    for (int i = 0; i < p; i++) {
        if (b[i] != b[i + 1]) x1++;
    }

    // boundaries in [p, n]
    for (int i = p; i <= n; i++) {
        if (b[i] != b[i + 1]) x2++;
    }
    int ans = max(x1, x2);
    cout << ans << nl;
}
