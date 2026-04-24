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
#define scan(n)                     \
    ([&]() {                        \
        vi v(n);                    \
        for (int i = 0; i < n; i++) \
            cin >> v[i];            \
        return v;                   \
    }())
#define ceildiv(a, b) (((a) + (b) - 1) / (b))
#define yes() cout << "YES" << nl
#define no() cout << "NO" << nl
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = " << x << nl;
#define vdebug(a)        \
    cout << #a << " = "; \
    for (auto x : a)     \
        cout << x << sp; \
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
    // cin >> test;
    while (test--) {
        solve();
    }
    return 0;
}

void solve() {
    int n;
    cin >> n;

    vector<int> t(n);
    for (int i = 0; i < n; i++)
        cin >> t[i];

    vector<int> groups;

    // Step 1: Build groups
    int cnt = 1;
    for (int i = 1; i < n; i++) {
        if (t[i] == t[i - 1]) {
            cnt++;
        } else {
            groups.push_back(cnt);
            cnt = 1;
        }
    }
    groups.push_back(cnt);

    // Step 2: Check adjacent pairs
    int ans = 0;
    for (int i = 0; i < (int)groups.size() - 1; i++) {
        ans = max(ans, 2 * min(groups[i], groups[i + 1]));
    }

    cout << ans << nl;
}