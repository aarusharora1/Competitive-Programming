#include <bits/stdc++.h>
using namespace std;
#define fori(i , a ,b) for (int  q = i ; q < a; q +=b )
#define vi vector<int>
typedef long long ll;
const int maxc = 1e9;
const int moddd= 998244353 ;

void solve() {
    ll n;
    cin >>n;
    vector<char> a(n);
    for (int i = 0 ; i < n ; i++) {cin >> a[i];}
    if (n == 2) {cout << "3\n"; return;}
    ll ans = 0;
 
    if (a[0] == a[n-1]) {
        ll i = 0; while (i < n&& a[i] == a[0]) {i++;ans++;}
        ll ans2 = 0;
        i = n-1; while (i > 0 && a[i] == a[0]) {i--;ans2++;}
        cout << ((1+ans)*(1+ans2)) % moddd << "\n";
    }
    else {
        ll i = 0 ; while (i < n && a[i] == a[0]) {i++;ans++;}
        ll ans2 = 0;
        i = n-1; while (i > 0 && a[i] == a[n-1]) {i--; ans2++;}
        
        cout << (ans+ans2+1)% moddd << "\n";
    }
}
int main() {
  
    solve();
  
  
  

  return 0;
}