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
#else
#define debug(x)
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
    string s;
    cin >> s;

    vector<int> f(26, 0);
    for (char c : s) f[c - 'a']++;

    int mn = 1e9, mx = -1;
    char mn_c = 'z', mx_c = 'a';

    for (int i = 0; i < 26; i++) {
        if (f[i] == 0) continue;

        if (f[i] < mn || (f[i] == mn && ('a' + i) < mn_c)) {
            mn = f[i];
            mn_c = 'a' + i;
        }

        if (f[i] > mx || (f[i] == mx && ('a' + i) > mx_c)) {
            mx = f[i];
            mx_c = 'a' + i;
        }
    }

    for (char &c : s) {
        if (c == mn_c) {
            c = mx_c;
            break;
        }
    }

    cout << s << '\n';
}
