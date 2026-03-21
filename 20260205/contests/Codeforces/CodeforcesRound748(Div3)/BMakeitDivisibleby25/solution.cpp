#include <bits/stdc++.h>

#include <climits>
#include <vector>
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

class Solution {
    vector<string> patterns = {"00", "25", "50", "75"};

    public:
    void solve() {
        string num;
        cin >> num;
        int ans = INT_MAX;
        for (string pat : patterns) {
            ans = min(ans, match(num, pat));
        }
        cout << ans << nl;
    }
    int match(string& txt, string& pat) {
        int ans = 0;
        int idx = txt.length() - 1;
        while (idx >= 0 && txt[idx] != pat[1]) {
            idx--;
            ans++;
        }
        if (idx < 0) {
            return INT_MAX;
        }
        idx--;

        while (idx >= 0 && txt[idx] != pat[0]) {
            idx--;
            ans++;
        }
        if (idx < 0) {
            return INT_MAX;
        }
        return ans;
    }
};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll test = 1;
    cin >> test;
    Solution obj;
    while (test--) {
        obj.solve();
    }
    return 0;
}
