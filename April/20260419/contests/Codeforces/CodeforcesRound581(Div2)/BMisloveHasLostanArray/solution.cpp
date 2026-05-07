#include <bits/stdc++.h>

#include <numeric>
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
    /* cin >> test; */
    while (test--) {
        solve();
    }
    return 0;
}

void solve() {
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> arr1, arr2;
    int m = 1;
    for (int i = 0; i < n; i++) {
        if (i < l) {
            arr1.push_back(m);
            m = m * 2;
        } else {
            arr1.push_back(1);
        }
    }
    m = 1;
    for (int i = 0; i < n; i++) {
        if (i < r) {
            arr2.push_back(m);
            m = m * 2;
        } else {
            arr2.push_back(m / 2);
        }
    }
    int s1 = accumulate(all(arr1), 0LL);
    int s2 = accumulate(all(arr2), 0LL);
    cout << s1 << sp << s2 << nl;
}
