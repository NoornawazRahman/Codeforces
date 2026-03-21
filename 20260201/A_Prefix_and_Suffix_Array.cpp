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
    vector<string> s;
    for (int i = 0; i < 2 * n - 2; i++) {
        string str;
        cin >> str;
        if (str.size() == n - 1) {
            s.push_back(str);
        }
    }
    reverse(s[0].begin(), s[0].end());
    if (s[0] == s[1]) {
        cout << "YES" << nl;
    } else {
        cout << "NO" << nl;
    }
}