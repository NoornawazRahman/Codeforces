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
    int n, x;
    cin >> n >> x;
    vector<int> v = inputVector<int>(n);
    int fuel = v[0];
    for (int i = 0; i < n - 1; i++) {
        fuel = max(fuel, v[i + 1] - v[i]);
    }
    fuel = max(fuel, 2 * (x - v[n - 1]));
    cout << fuel << nl;
}