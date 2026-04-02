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
    int winners = n;
    int losers = 0;
    int ans = 0;
    while (winners > 1 || losers > 1) {
        int matches = winners / 2;
        ans += matches;
        winners -= matches;
        losers += matches;
        ans += losers / 2;
        losers -= losers / 2;
    }
    cout << ans + 1 << nl;
}
