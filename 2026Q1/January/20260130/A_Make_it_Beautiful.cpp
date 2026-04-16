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
    if (a[0] == a[n - 1]) {
        cout << "NO" << nl;
        return;
    }
    cout << "YES" << nl;
    cout << a[n - 1] << sp;
    for (int i = 0; i < n - 1; i++) {
        cout << a[i] << sp;
    }
    cout << nl;
}