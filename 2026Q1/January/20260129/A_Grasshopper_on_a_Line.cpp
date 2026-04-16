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
    int x, k;
    cin >> x >> k;
    if (x % k == 0) {
        cout << 2 << nl;
        cout << 1 << " " << x - 1 << nl;
    } else {
        cout << 1 << nl << x << nl;
    }
}