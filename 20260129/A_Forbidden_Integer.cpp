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
    int n, k, x;
    cin >> n >> k >> x;
    if (x != 1) {
        cout << "YES" << nl << n << nl;
        while (n--) {
            cout << 1 << " ";
        }
        cout << nl;
        return;
    }

    if (k == 1 || (k == 2 && (n & 1))) {
        cout << "NO" << nl;
        return;
    }

    cout << "YES" << nl;
    cout << n / 2 << nl;
    if (n & 1) {
        cout << 3 << " ";
    } else {
        cout << 2 << " ";
    }
    int it = n / 2 - 1;
    while (it--) {
        cout << 2 << " ";
    }
    cout << nl;
}