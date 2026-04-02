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
    /* cin >> test; */
    while (test--) {
        solve();
    }
    return 0;
}

void solve() {
    int n, m;
    cin >> n >> m;
    vi a = scan(n + 1);
    vi prefix(n + 1);
    vi suffix(n + 1);
    for (int i = 1; i + 1 <= n; i++) {
        prefix[i + 1] = prefix[i] + max(0LL, a[i] - a[i + 1]);
    }
    for (int i = n; i - 1 >= 1; i--) {
        suffix[i - 1] = suffix[i] + max(0LL, a[i] - a[i - 1]);
    }
    vdebug(prefix);
    vdebug(suffix);
    while (m--) {
        int s, t;
        cin >> s >> t;
        int ans = 0;
        if (s < t) {
            ans = prefix[t] - prefix[s];
        } else {
            ans = suffix[t] - suffix[s];
        }
        cout << ans << nl;
    }
}
