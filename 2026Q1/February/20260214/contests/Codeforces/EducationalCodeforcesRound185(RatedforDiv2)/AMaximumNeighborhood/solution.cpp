#include <bits/stdc++.h>
using namespace std;

#define int int64_t
#define vi vector<int64_t>
#define all(x) (x).begin(), (x).end()
#define scan inputVector<int64_t>
#define mod 1000000007
const char nl = '\n';
const char sp = ' ';

void solve();
template <typename T>
vector<T> inputVector(int n) {
    vector<T> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    return v;
}

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
    vector<vector<int>> v(n, vector<int>(n));
    int k = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            v[i][j] = k++;
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int up = (i - 1 >= 0) ? v[i - 1][j] : 0;
            int down = (i + 1 < n) ? v[i + 1][j] : 0;
            int left = (j - 1 >= 0) ? v[i][j - 1] : 0;
            int right = (j + 1 < n) ? v[i][j + 1] : 0;
            int candidate = up + down + left + right + v[i][j];
            ans = max(ans, candidate);
        }
    }
    cout << ans << nl;
}
