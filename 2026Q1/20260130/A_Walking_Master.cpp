#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define scan inputVector<int>
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
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll topRightMoves = d - b;
    if (topRightMoves < 0) {
        cout << -1 << nl;
        return;
    }
    ll curr_x = a + topRightMoves;
    ll leftMoves = curr_x - c;
    if (leftMoves < 0) {
        cout << -1 << nl;
        return;
    }
    ll ans = topRightMoves + leftMoves;
    cout << ans << nl;
}