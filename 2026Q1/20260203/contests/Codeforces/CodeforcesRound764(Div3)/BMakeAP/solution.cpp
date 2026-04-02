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
    int a, b, c;
    cin >> a >> b >> c;
    int new_b = (a + c) / 2;
    if (new_b >= b && new_b % b == 0 && (a + c) % 2 == 0) {
        cout << "YES" << nl;
        return;
    }

    int new_a = 2 * b - c;
    if (new_a >= a && new_a % a == 0) {
        cout << "YES" << nl;
        return;
    }

    int new_c = 2 * b - a;
    if (new_c >= c && new_c % c == 0) {
        cout << "YES" << nl;
        return;
    }

    cout << "NO" << nl;
}
