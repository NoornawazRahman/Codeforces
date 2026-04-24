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
    vector<int> a = scan(n);
    vector<bool> deleted(n, false);
    sort(all(a), greater<>());
    vdebug(a);
    int lastOdd = -1;
    int lastEven = -1;
    bool turn = true;
    for (int i = 0; i < n; i++) {
        if (!turn) {
            bool found = false;
            for (int j = lastOdd + 1; j < n; j++) {
                if (deleted[j])
                    continue;
                if (a[j] & 1) {
                    deleted[j] = true;
                    lastOdd = j;
                    found = true;
                    break;
                }
            }
            if (!found)
                break;
        } else {
            bool found = false;
            for (int j = lastEven + 1; j < n; j++) {
                if (deleted[j])
                    continue;
                if (a[j] % 2 == 0) {
                    deleted[j] = true;
                    lastEven = j;
                    found = true;
                    break;
                }
            }
            if (!found)
                break;
        }
        turn = !turn;
    }
    vdebug(deleted);
    int sum1 = 0;
    for (int i = 0; i < n; i++) {
        if (!deleted[i]) {
            sum1 += a[i];
        }
    }

    fill(all(deleted), false);
    lastOdd = -1;
    lastEven = -1;
    turn = false;
    for (int i = 0; i < n; i++) {
        if (!turn) {
            bool found = false;
            for (int j = lastOdd + 1; j < n; j++) {
                if (deleted[j])
                    continue;
                if (a[j] & 1) {
                    deleted[j] = true;
                    lastOdd = j;
                    found = true;
                    break;
                }
            }
            if (!found)
                break;
        } else {
            bool found = false;
            for (int j = lastEven + 1; j < n; j++) {
                if (deleted[j])
                    continue;
                if (a[j] % 2 == 0) {
                    deleted[j] = true;
                    lastEven = j;
                    found = true;
                    break;
                }
            }
            if (!found)
                break;
        }
        turn = !turn;
    }
    int sum2 = 0;
    for (int i = 0; i < n; i++) {
        if (!deleted[i]) {
            sum2 += a[i];
        }
    }

    int ans = min(sum1, sum2);
    cout << ans << nl;
}