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

bool isValid(string& s) {
    int bal = 0;
    int n = s.length();
    for (int i = 0; i < n; i++) {
        if (bal < 0) {
            return false;
        }
        if (s[i] == '(') {
            bal++;
        } else {
            bal--;
        }
    }
    return bal == 0;
}

void solve() {
    string a;
    cin >> a;
    int n = a.length();
    for (int i = 0; i < 8; i++) {
        umap<char, char> m;
        m['A'] = (i & 1) ? '(' : ')';
        m['B'] = (i & 2) ? '(' : ')';
        m['C'] = (i & 4) ? '(' : ')';
        string b;
        for (int j = 0; j < n; j++) {
            b += m[a[j]];
        }
        if (isValid(b)) {
            yes();
            return;
        }
    }
    no();
}
