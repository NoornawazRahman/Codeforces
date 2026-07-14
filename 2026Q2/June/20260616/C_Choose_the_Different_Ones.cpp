#include <bits/stdc++.h>
using namespace std;

#define int long long
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
        vector<int> v(n);           \
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
    cerr << #a << " = "; \
    for (auto x : a)     \
        cerr << x << sp; \
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
    cin >> test;
    while (test--) {
        solve();
    }
    return 0;
}

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a = scan(n);
    vector<int> b = scan(m);
    set<int> aub;
    for (int i = 0; i < n; i++) {
        aub.insert(a[i]);
    }
    for (int i = 0; i < m; i++) {
        aub.insert(b[i]);
    }
    for (int i = 1; i <= k; i++) {
        if (!aub.count(i)) {
            no();
            return;
        }
    }
    set<int> seta(all(a));
    set<int> setb(all(b));
    int cnt1 = 0;
    int cnt2 = 0;
    for (int i = 1; i <= k; i++) {
        if (seta.count(i)) {
            cnt1++;
        }
        if (setb.count(i)) {
            cnt2++;
        }
    }
    if (cnt1 >= k / 2 && cnt2 >= k / 2) {
        yes();
    } else {
        no();
    }
}