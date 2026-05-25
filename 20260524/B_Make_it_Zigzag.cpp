#include <bits/stdc++.h>
using namespace std;

#define int long long
#define all(x) (x).begin(), (x).end()
#define umap unordered_map
#define uset unordered_set
#define print(v)                                                               \
  ([&]() {                                                                     \
    int n=v.size();                                                            \
    for (int i = 0; i < n; i++) {                                              \
      cout << v[i]<<" \n"[i==n-1];                                             \
   }                                                                           \
  }())
#define scan(n)                                                                \
  ([&]() {                                                                     \
    vector<int> v(n);                                                                   \
    for (int i = 1; i < n-1; i++)                                                \
      cin >> v[i];                                                             \
    return v;                                                                  \
  }())
#define ceildiv(a, b) (((a) + (b) - 1) / (b))
#define yes() cout<<"YES"<<nl 
#define no() cout<<"NO"<<nl 
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = " << x << nl;
#define vdebug(a) cout << #a << " = "; for(auto x: a) cout << x << sp; cout << nl;
#else
#define debug(x)
#define vdebug(a)
#endif
const char nl = '\n';
const char sp = ' ';
void solve();

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
    int n;
    cin>>n;
    vector<int> a=scan(n+2);
    a[0]=a[n+1]=INT_MAX;
    // vdebug(a);
    int prefixMax=INT_MIN;
    for(int i=1;i<=n;i++){
        prefixMax=max(prefixMax, a[i]);
        if(i%2==0){
            a[i]=prefixMax;
        }
    }
    int ans=0;
    for(int i=1;i<=n;i+=2){
        int t=max(0LL,a[i]-min(a[i+1],a[i-1])+1);
        ans+=t;
    }
    cout<<ans<<nl;
}