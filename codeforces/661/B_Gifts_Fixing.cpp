#include <bits/stdc++.h>
using namespace std;
#define fori(i , a ,b) for (int  q = i ; q < a; q +=b )
#define vi vector<int>
typedef long long ll;
int main() {
  int t;
  cin >> t;
    while (t--) {
        int n = 0 ; 
        cin >> n ;
        vector<ll> a(n);
        vector<ll> b(n);
        ll am = 1e9;
        ll bm = 1e9;
        for (ll i = 0 ; i < n ;i ++) {
            cin >> a[i]; if (a[i] < am) {am = a[i];}
        }
        for (ll i = 0 ; i < n ; i ++) {
            cin >> b[i]; if (b[i] < bm) {bm = b[i];}
        }
        ll ans = 0 ;
        //cout << " A: " << am << " : B: " << bm << "\n";
        for (ll i = 0 ; i < n ; i++) {
            //cout << "A[i] " << a[i]-am << " B: " << b[i] - bm << "\n";
            if (a[i] > am && b[i] > bm) {
                ll mi = min(a[i]-am, b[i]-bm);
                ans += mi;
                ll ma = max(a[i]-am,b[i]-bm);
                ans += ma-mi;
                continue;
            }
            ans += (a[i] - am);
            ans += (b[i] - bm);
        }
        cout << ans << "\n";

    }
  

  return 0;
}