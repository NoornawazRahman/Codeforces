#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007
const char nl = '\n';

template <typename T>
vector<T> scan(int n) {
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
    vector<int> v = scan<int>(n);
    unordered_map<int, int> freq;
    int n1 = -1, n2 = -1;
    for (int x : v) {
        freq[x]++;
        if (freq.size() > 2) {
            cout << "No" << nl;
            return;
        }
        if (n1 == -1) {
            n1 = x;
        } else if (n2 == -1 && x != n1) {
            n2 = x;
        }
    }
    if (freq.size() == 1 || abs(freq[n1] - freq[n2]) <= 1) {
        cout << "Yes" << nl;
    } else {
        cout << "No" << nl;
    }
}