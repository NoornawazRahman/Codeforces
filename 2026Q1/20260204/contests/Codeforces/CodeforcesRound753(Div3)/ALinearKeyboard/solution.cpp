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
    string keyboard, s;
    cin >> keyboard >> s;
    map<char, int> map;
    for (int i = 0; i < 26; i++) {
        map[keyboard[i]] = i + 1;
    }
    int ans = 0;
    for (int i = 1; i < s.length(); i++) {
        ans += abs(map[s[i]] - map[s[i - 1]]);
    }
    cout << ans << nl;
}
