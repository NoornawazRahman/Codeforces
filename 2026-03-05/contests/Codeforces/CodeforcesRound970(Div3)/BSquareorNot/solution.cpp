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
#define yes() cout << "Yes" << nl
#define no() cout << "No" << nl
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = " << x << endl;
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
    int root = sqrt(n);
    if (root * root != n) {
        string s;
        cin >> s;
        no();
        return;
    }
    int d = root;
    vector<vector<char>> s(d, vector<char>(d));
    for (int i = 0; i < d; i++) {
        for (int j = 0; j < d; j++) {
            cin >> s[i][j];
        }
    }
    for (int i = 0; i < d; i++) {
        for (int j = 0; j < d; j++) {
            if (i == d - 1 || j == d - 1 || i == 0 || j == 0) {
                if (s[i][j] != '1') {
                    no();
                    return;
                }
            } else {
                if (s[i][j] != '0') {
                    no();
                    return;
                }
            }
        }
    }
    yes();
}
