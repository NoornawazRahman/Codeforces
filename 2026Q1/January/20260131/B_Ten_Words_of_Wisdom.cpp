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
    int a, b;
    int winner;
    int maxQuality = INT_MIN;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        if (a > 10) {
            continue;
        }
        if (b > maxQuality) {
            winner = i + 1;
            maxQuality = b;
        }
    }
    cout << winner << nl;
}