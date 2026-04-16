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
    cin >> test;
    while (test--) {
        solve();
    }
    return 0;
}

void solve() {
    ll x, y;
    cin >> x >> y;
    ll ans;
    if (x <= y) {
        if ((y & 1) == 1) {
            ans = y * y - (x - 1);
        } else {
            ans = (y - 1) * (y - 1) + x;
        }
    } else {
        if ((x & 1) == 0) {
            ans = x * x - (y - 1);
        } else {
            ans = (x - 1) * (x - 1) + y;
        }
    }
    cout << ans << nl;
}