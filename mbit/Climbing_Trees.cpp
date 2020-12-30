#include <bits/stdc++.h>
using namespace std;
#define fori(i , a ,b) for (int  q = i ; q < a; q +=b )
#define vi vector<int>
typedef long long ll;
const int maxc = 1e9;
void solve() {
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (ll i = 0 ; i <n ; i++) {
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    ll ans = 0;
    for (ll i = 0; i < n ; i++) {
        ll ans2= a[i];
        ll j = i+1;
        while (j<n&&a[j] - a[j-1] <= k) {ans2+=a[j];j++;}
        ans = max(ans,ans2);
        i = j-1;
    }
    cout << ans << "\n";
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    solve();
  
  
  

  return 0;
}