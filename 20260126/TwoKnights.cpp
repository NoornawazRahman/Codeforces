#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007
const char nl = '\n';

template <typename T>
vector<T> inputVector(int n) {
    vector<T> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    return v;
}

void solve();

int main() {
    ll test = 1;
    // cin>>test;
    while (test--) {
        solve();
    }
    return 0;
}

void solve() {
    int n;
    cin >> n;
    cout << 0 << nl;
    for (int k = 2; k <= n; k++) {
        ll totalCells = k * k;
        // total number of ways to place two knights
        ll total = totalCells * (totalCells - 1) / 2;
        // number of 2x3 and 3x2 slabs * number of attacking positions
        ll slabs = 2 * (k - 2) * (k - 1) * 2;
        cout << total - slabs << nl;
    }
}