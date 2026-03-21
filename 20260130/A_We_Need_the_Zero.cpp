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
    int n;
    cin >> n;
    vi a = scan(n);
    int x = 0;
    for (int i = 0; i < n; i++) {
        x = x ^ a[i];
    }

    if (n & 1) {
        cout << x << nl;
    } else {
        if (x == 0) {
            cout << x << nl;
        } else {
            cout << -1 << nl;
        }
    }
}