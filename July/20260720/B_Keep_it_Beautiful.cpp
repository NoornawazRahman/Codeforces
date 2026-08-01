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

void one() {
    cout << '1';
}
void zero() {
    cout << '0';
}

void solve() {
    int q;
    cin >> q;
    vector<int> x = scan(q);
    int first = x[0];
    one();
    int last = x[0];
    bool reachedPeak = false;
    for (int i = 1; i < q; i++) {
        if (reachedPeak == false && last <= x[i]) {
            one();
            last = x[i];
        } else if (reachedPeak == false && first >= x[i]) {
            one();
            last = x[i];
            reachedPeak = true;
        } else if (reachedPeak == true && first >= x[i] && last <= x[i]) {
            one();
            last = x[i];
        } else {
            zero();
        }
    }
    cout << nl;
}
