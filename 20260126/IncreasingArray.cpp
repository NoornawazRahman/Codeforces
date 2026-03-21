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
    vector<ll> v = inputVector<ll>(n);
    ll moves = 0;
    for (int i = 0; i < n - 1; i++) {
        if (v[i] > v[i + 1]) {
            ll diff = abs(v[i] - v[i + 1]);
            moves += diff;
            v[i + 1] += diff;
        }
    }
    cout << moves;
}