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

vi counts(1e6);

bool isExtremelyRound(int n) {
    int count = 0;
    while (n != 0) {
        int d = n % 10;
        count += (d != 0);
        if (count > 1) {
            return false;
        }
        n = n / 10;
    }
    return true;
}
void init() {
    counts[0] = 0;
    for (int i = 1; i < 1e6; i++) {
        counts[i] = counts[i - 1] + isExtremelyRound(i);
    }
}

int main() {
    ll test = 1;
    cin >> test;
    init();
    while (test--) {
        solve();
    }
    return 0;
}

void solve() {
    int n;
    cin >> n;
    cout << counts[n] << nl;
}