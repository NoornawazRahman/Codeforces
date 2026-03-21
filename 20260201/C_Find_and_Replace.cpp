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
    string s;
    cin >> s;
    vi mp(26, -1);
    for (int i = 0; i < n; i++) {
        int curr = s[i] - 'a';
        if (mp[curr] == -1) {
            mp[curr] = (i & 1);
        } else {
            if (mp[curr] != (i & 1)) {
                cout << "NO" << nl;
                return;
            }
        }
    }
    cout << "YES" << nl;
}