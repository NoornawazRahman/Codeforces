#include <bits/stdc++.h>

#include <unordered_map>
using namespace std;

#define int int64_t
#define vi vector<int64_t>
#define all(x) (x).begin(), (x).end()
#define scan inputVector<int64_t>
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

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int test = 1;
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
    unordered_map<char, int> freq;
    for (int i = 0; i < n; i++) {
        freq[s[i]]++;
    }
    int oddCount = 0;
    for (auto &[k, v] : freq) {
        if (v & 1) {
            oddCount++;
        }
    }
    if (oddCount > 1) {
        cout << -1 << nl;
        return;
    }
    unordered_map<char, vector<int>> map;
    for (int i = 0; i < n; i++) {
        map[s[i]].push_back(i + 1);
    }
    vi p(n);
    int left = 0;
    int right = n - 1;
    for (auto &[k, v] : map) {
        while (v.size() >= 2) {
            int a = v.back();
            v.pop_back();
            int b = v.back();
            v.pop_back();
            p[left++] = a;
            p[right--] = b;
        }
    }
    if (n & 1) {
        for (auto &[k, v] : map) {
            if (v.size() == 1) {
                p[left] = v[0];
                break;
            }
        }
    }
    for (auto &x : p) {
        cout << x << sp;
    }
    cout << nl;
}
