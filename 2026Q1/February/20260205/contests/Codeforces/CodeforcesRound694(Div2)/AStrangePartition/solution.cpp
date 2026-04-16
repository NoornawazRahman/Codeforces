#include <bits/stdc++.h>
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
    ll n, x;
    cin >> n >> x;
    vi a = scan(n);
    ll beauty_divisible = 0;
    ll sum_nondivisible = 0;
    ll total_beauty = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % x == 0) {
            beauty_divisible += (a[i] / x);
        } else {
            sum_nondivisible += a[i];
        }
        total_beauty += ceil((double)a[i] / x);
    }
    if (sum_nondivisible == 0) {
        cout << beauty_divisible << sp << beauty_divisible << nl;
    } else {
        ll t1 = ceil((double)sum_nondivisible / x) + beauty_divisible;
        cout << t1 << sp << total_beauty << nl;
    }
}
