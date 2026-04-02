#include <bits/stdc++.h>
using namespace std;

#define int int64_t
#define vi vector<int64_t>
#define all(x) (x).begin(), (x).end()
#define scan inputVector<int64_t>
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

class Solution {
    public:
    void solve() {
        int n;
        cin >> n;
        string s;
        cin >> s;
        if (isNewYearString(s)) {
            cout << 0 << nl;
        } else {
            cout << 1 << nl;
        }
    }
    bool isNewYearString(string s) {
        if (s.find("2026") != -1) {
            return true;
        }
        if (s.find("2025") == -1) {
            return true;
        }
        return false;
    }
};

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int test = 1;
    cin >> test;
    Solution obj;
    while (test--) {
        obj.solve();
    }
    return 0;
}
