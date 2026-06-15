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
#define yes() cout << "Yes" << nl
#define no() cout << "No" << nl
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
    cin >> test;
    while (test--) {
        solve();
    }
    return 0;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a = scan(n);
    sort(all(a));
    if (a[0] == 1) {
        yes();
        return;
    }
    vector<int> b;
    int cnt = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] % a[0] != 0) {
            cnt++;
            b.push_back(a[i]);
        }
    }
    if (cnt == 0) {
        yes();
        return;
    }
    sort(all(b));
    for (int i = 1; i < cnt; i++) {
        if (b[i] % b[0] != 0) {
            no();
            return;
        }
    }
    yes();
}