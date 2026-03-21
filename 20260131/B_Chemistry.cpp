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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    map<char, int> freq;
    for (int i = 0; i < n; i++) {
        freq[s[i]]++;
    }
    int count = 0;
    for (auto &[key, value] : freq) {
        count += (value & 1);
    }
    if (count > k + 1) {
        cout << "NO" << nl;
    } else {
        cout << "YES" << nl;
    }
}