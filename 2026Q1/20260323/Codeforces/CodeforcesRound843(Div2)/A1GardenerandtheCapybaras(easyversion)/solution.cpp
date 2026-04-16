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
    cin >> test;
    while (test--) {
        solve();
    }
    return 0;
}

int myStrcmp(string s, int i1, int j1, int i2, int j2) {
    int len1 = j1 - i1 + 1;
    int len2 = j2 - i2 + 1;
    int n = min(len1, len2);
    for (int k = 0; k < n; k++) {
        if (s[i1 + k] != s[i2 + k]) {
            return s[i1 + k] - s[i2 + k];
        }
    }
    return len1 - len2;
}
void myPrint(string s, int i, int j) {
    for (int k = i; k <= j; k++) {
        cout << s[k];
    }
}

void solve() {
    string s;
    cin >> s;
    int n = s.length();
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if ((myStrcmp(s, i + 1, j, 0, i) >= 0 &&
                 myStrcmp(s, i + 1, j, j + 1, n - 1) >= 0) ||
                (myStrcmp(s, i + 1, j, 0, i) <= 0 &&
                 myStrcmp(s, i + 1, j, j + 1, n - 1) <= 0)) {
                myPrint(s, 0, i);
                cout << sp;
                myPrint(s, i + 1, j);
                cout << sp;
                myPrint(s, j + 1, n - 1);
                cout << nl;
                return;
            }
        }
    }
    cout << ":(" << nl;
}
