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

void solve() {
    int n;
    cin >> n;
    vector<string> s(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int up = i - 1;
            int down = i + 1;
            int left = j - 1;
            int right = j + 1;
            if (up < 0 || down >= n || left < 0 || right >= n)
                continue;
            if (s[i][j] == '.' && s[up][j] == '.' && s[down][j] == '.' && s[i][left] == '.' && s[i][right] == '.') {
                s[i][j] = '#';
                s[up][j] = '#';
                s[down][j] = '#';
                s[i][left] = '#';
                s[i][right] = '#';
                // cout << "yo" << nl;
            }
        }
    }

    // for (int i = 0; i < n; i++) {
    //     cout << s[i] << nl;
    // }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (s[i][j] == '.') {
                no();
                return;
            }
        }
    }

    yes();
}