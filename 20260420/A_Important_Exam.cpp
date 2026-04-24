#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<string> s(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    vector<int> a(m);
    for (int j = 0; j < m; j++) {
        cin >> a[j];
    }
    int ans = 0;
    for (int j = 0; j < m; j++) {
        map<char, int> freq;
        int maxi = 0;
        for (int i = 0; i < n; i++) {
            freq[s[i][j]]++;
            maxi = max(maxi, freq[s[i][j]]);
        }
        ans += maxi * a[j];
    }
    cout << ans << endl;
}

int main() {
    int t = 1;
    // cin>>t;
    while (t--) {
        solve();
    }
    return 0;
}