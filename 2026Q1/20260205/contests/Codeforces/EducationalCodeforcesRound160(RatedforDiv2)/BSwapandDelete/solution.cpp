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
    int count0 = 0;
    int count1 = 0;
    int n = s.length();
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            count0++;
        } else {
            count1++;
        }
    }
    int t = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '0' && count1 > 0) {
            count1--;
            t++;
        } else if (s[i] == '1' && count0 > 0) {
            count0--;
            t++;
        } else {
            break;
        }
    }
    cout << n - t << nl;
}
