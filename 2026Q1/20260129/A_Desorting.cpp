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
    int diff = INT_MAX;
    for (int i = 1; i < n; i++) {
        diff = min(diff, a[i] - a[i - 1]);
        if (diff < 0) {
            cout << 0 << nl;
            return;
        }
    }
    cout << diff / 2 + 1 << nl;
}