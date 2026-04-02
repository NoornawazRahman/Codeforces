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
    for (int i = 0; i < n; i++) {
        if (a[i] == 1) {
            a[i]++;
        }
    }
    for (int i = 1; i < n; i++) {
        if (a[i] % a[i - 1] == 0) {
            a[i]++;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] << sp;
    }
    cout << nl;
}