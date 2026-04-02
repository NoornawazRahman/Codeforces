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
    string s, t;
    cin >> s >> t;
    int m = s.size();
    int n = t.size();
    unordered_map<char, int> smap, tmap;
    for (char ch : s)
        smap[ch]++;
    for (char ch : t)
        tmap[ch]++;
    int i = 0, j = 0;
    while (i < m && j < n) {
        if (s[i] == t[j]) {
            if (smap[s[i]] < tmap[t[j]])
                break;
            if (smap[s[i]] == tmap[t[j]]) {
                tmap[t[j]]--;
                j++;
            }
        }
        smap[s[i]]--;
        i++;
    }
    if (j == n) {
        cout << "YES" << nl;
    } else {
        cout << "NO" << nl;
    }
}