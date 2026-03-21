#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define scan inputVector<int>
#define mod 1000000007
const char nl = '\n';

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
    int start = 0;
    int end = n - 1;
    while ((s[start] == '1' && s[end] == '0') || (s[start] == '0' && s[end] == '1')) {
        start++;
        end--;
        if (start > end) {
            cout << 0 << nl;
            return;
        }
    }

    cout << end - start + 1 << nl;
}