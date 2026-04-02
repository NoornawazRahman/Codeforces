#include <bits/stdc++.h>

#include <algorithm>
using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define all(x) (x).begin(), (x).end()
#define scan inputVector<int>
#define mod 1000000007
const char nl = '\n';
const char sp = ' ';

void solve();
template <typename T>
vector<T> inputVector(int n) {
    vector<T> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    return v;
}

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
    ll a, b;
    cin >> a >> b;
    if (a == b) {
        cout << 0 << sp << 0 << nl;
        return;
    }
    if (a < b) {
        swap(a, b);
    }
    ll gcd = a - b;
    ll operations = min(b % gcd, gcd - b % gcd);
    cout << gcd << sp << operations << nl;
}
