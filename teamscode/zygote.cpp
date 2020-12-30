#include <bits/stdc++.h>
using namespace std;
#define fori(i , a ,b) for (int  q = i ; q < a; q +=b )
#define vi vector<int>
typedef long long ll;
const int maxc = 1e9;
void solve() {
    ll n; cin >> n; ll m; cin >> m;
    vector<ll> a (n);
    for (ll i = 0 ;i < n; i++) {
        cin >> a[i];
    }
    for (ll i = 1; i < n ; i++) {
        a[i] += a[i-1];
    }
    for (ll i = 0; i < m ; i++) {
        ll q; cin >>q;
        cout << a[q-1] << "\n"; 
    }
}
int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);   
    solve();
  
  
  

  return 0;
}