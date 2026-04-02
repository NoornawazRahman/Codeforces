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
    // cin >> test;
    while (test--) {
        solve();
    }
    return 0;
}

void solve() {
    // for (int i = 0; i < 10; i++) {
    //     if (i & 1 == 1) {
    //         cout << i << " --> ODD" << nl;
    //     } else {
    //         cout << i << " --> EVEN" << nl;
    //     }
    // }

    // for (int i = 0; i < 10; i++) {
    //     if ((i & 1) == 0) { //correct
    //         cout << i << " --> EVEN" << nl;
    //     } else {
    //         cout << i << " --> ODD" << nl;
    //     }
    // }

    for (int i = 0; i < 10; i++) {
        if (i & 1 == 0) { // wrong
            cout << i << " --> EVEN" << nl;
        } else {
            cout << i << " --> ODD" << nl;
        }
    }
}