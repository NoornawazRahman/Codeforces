#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
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
    if (n & 1) {
        cout << 4 << nl;
        cout << 1 << sp << n - 1 << nl;
        cout << 1 << sp << n - 1 << nl;
        cout << n - 1 << sp << n << nl;
        cout << n - 1 << sp << n << nl;
    } else {
        cout << 2 << nl;
        cout << 1 << sp << n << nl;
        cout << 1 << sp << n << nl;
    }
}