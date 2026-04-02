#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007
const char nl = '\n';

void solve() {
    ll n;
    cin >> n;
    ll sum = 0;
    for (int i = 0; i < n - 1; i++) {
        int x;
        cin >> x;
        sum += x;
    }
    cout << n * (n + 1) / 2 - sum;
}

int main() {
    ll test = 1;
    // cin>>test;
    while (test--) {
        solve();
    }
    return 0;
}