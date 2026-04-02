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

void solve();
template <typename T>
vector<T> inputVector(int n) {
    vector<T> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    return v;
}

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
    string s;
    cin >> s;
    int n = s.length();
    int zero = 0;
    int one = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            one++;
        } else {
            zero++;
        }
    }
    int total_moves = min(zero, one);
    if (total_moves & 1) {
        cout << "DA" << nl;
    } else {
        cout << "NET" << nl;
    }
}
