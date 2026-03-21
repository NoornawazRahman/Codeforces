#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define scan inputVector<int>
#define mod 1000000007
const char nl = '\n';
const char sp = ' ';

template <typename T>
vector<T> inputVector(int n) {
    vector<T> v(n + 1);
    for (int i = 1; i <= n; i++) {
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
    int n, q;
    cin >> n >> q;
    vi a = scan(n);
    vll prefixSum(n + 1);
    vll suffixSum(n + 2);
    prefixSum[1] = a[1];
    for (int i = 2; i <= n; i++) {
        prefixSum[i] = prefixSum[i - 1] + a[i];
    }
    suffixSum[n] = a[n];
    for (int i = n - 1; i >= 1; i--) {
        suffixSum[i] = suffixSum[i + 1] + a[i];
    }
    while (q--) {
        int l, r, k;
        cin >> l >> r >> k;
        ll sum = prefixSum[l - 1] + suffixSum[r + 1] + (l - r + 1) * k;
        if (sum & 1) {
            cout << "YES" << nl;
        } else {
            cout << "NO" << nl;
        }
    }
}