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
        for (int i = 0; i < n; i++) cin >> v[i]; \
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
    cin >> test;
    while (test--) {
        solve();
    }
    return 0;
}

void solve() {
    string x1, x2;
    int p1, p2;
    cin >> x1 >> p1 >> x2 >> p2;
    int mini = min(p1, p2);
    p1 -= mini;
    p2 -= mini;
    int n = x1.size() + p1;
    int m = x2.size() + p2;
    if (n != m) {
        if (n > m) {
            cout << ">" << nl;
        } else {
            cout << "<" << nl;
        }
        return;
    }
    vector<char> s1(n, '0');
    vector<char> s2(m, '0');
    for (int i = 0; i < x1.size(); i++) {
        s1[i] = x1[i];
    }

    for (int i = 0; i < x2.size(); i++) {
        s2[i] = x2[i];
    }
    vdebug(s1);
    vdebug(s2);
    for (int i = 0; i < n; i++) {
        if (s1[i] != s2[i]) {
            if (s1[i] > s2[i]) {
                cout << ">" << nl;
            } else {
                cout << "<" << nl;
            }
            return;
        }
    }
    cout << "=" << nl;
}
