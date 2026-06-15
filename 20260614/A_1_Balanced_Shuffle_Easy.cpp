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
    // cin >> test;
    while (test--) {
        solve();
    }
    return 0;
}

void solve() {
    string s;
    cin >> s;
    int n = s.size();
    vector<pair<int, int>> pairs;
    pairs.reserve(n);
    int bal = 0;
    pairs.push_back({bal, 0});
    for (int i = 1; i < n; i++) {
        if (s[i - 1] == '(') {
            bal++;
        } else {
            bal--;
        }
        pairs.push_back({bal, i});
    }
    sort(all(pairs), [](const pair<int, int> &a, const pair<int, int> &b) {
        if (a.first != b.first)
            return a.first < b.first;

        return a.second > b.second;
    });
    for (int i = 0; i < n; i++) {
        cout << s[pairs[i].second];
    }
    cout << nl;
}