#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007
const char nl = '\n';

void solve() {
    ll n;
    cin >> n;

    while (n != 1) {
        cout << n << " ";
        if ((n & 1) == 0) {
            n = n / 2;
        } else {
            n = n * 3 + 1;
        }
    }
    cout << n << " ";
}

int main() {
    ll test = 1;
    // cin >> test;
    while (test--) {
        solve();
    }
    return 0;
}