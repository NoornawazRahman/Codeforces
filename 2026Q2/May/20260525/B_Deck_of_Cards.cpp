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
    int n, k;
    string action;
    cin >> n >> k >> action;

    string top, bottom;
    int c2 = 0;
    for (int i = 0; i < k; i++) {
        switch (action[i]) {
        case '0':
            top += '-';
            break;
        case '1':
            bottom += '-';
            break;
        case '2':
            c2++;
            break;
        default:
            break;
        }
    }
    int rem = n - top.size() - bottom.size();
    string middle(rem, '+');
    if (c2 >= rem) {
        for (int i = 0; i < rem; i++) {
            middle[i] = '-';
        }
    } else if (c2 != 0) {
        for (int i = 0; i < c2; i++) {
            middle[i] = '?';
            middle[rem - i - 1] = '?';
        }
    }
    cout << top << middle << bottom << nl;
}