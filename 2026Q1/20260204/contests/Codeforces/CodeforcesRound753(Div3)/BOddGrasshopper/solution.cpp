#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define all(x) (x).begin(), (x).end()
#define scan inputVector<int>
#define mod 1000000007
const char nl = '\n';
const char sp = ' ';

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
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll test = 1;
    cin >> test;
    while (test--) {
        solve();
    }
    return 0;
}

void solve() {
    ll x, n;
    cin >> x >> n;
    ll moves = 0;
    if (n % 4 == 1) {
        moves = -n;
    } else if (n % 4 == 2) {
        moves = 1;
    } else if (n % 4 == 3) {
        moves = n + 1;
    }
    ll ans;
    if (x & 1) {
        ans = x - moves;
    } else {
        ans = x + moves;
    }
    cout << ans << nl;
}
