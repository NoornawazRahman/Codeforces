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
int n, s1, e1, s2, e2;

int next1(int z) {
    if (z < n) {
        return z + 1;
    }
    return 1;
}
int next2(int z) {
    if (z > 1) {
        return z - 1;
    }
    return n;
}
void solve() {
    cin >> n >> s1 >> e1 >> s2 >> e2;
    int x = s1, y = s2;
    int iter = 100;
    while (iter--) {
        if (x == y) {
            yes();
            return;
        }
        if (x == e1 || y == e2)
            break;
        x = next1(x);
        y = next2(y);
    }
    no();
}