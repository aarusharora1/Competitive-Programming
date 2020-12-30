#include <bits/stdc++.h>
using namespace std;
#define fori(i , a ,b) for (int  q = i ; q < a; q +=b )
#define vi vector<int>
typedef long long ll;
const int maxc = 1e9;

void solve() {
    ll n;
    cin >> n;
    for (int i = 0 ; i < n ; i++) {
        ll b; cin >> b;
        string x; cin >> x;
        ll temp = 1;
        ll bas10 = 0;
        for (ll j = 0; j <x.size(); j++) {
           //cout << " J: " << x[x.size()-1-j] << " PO " << pow(b,j) << "\n";
            bas10 += temp *( x[x.size()-1-j]-'0');temp*=b;
        }   
        //cout << bas10 << "\n";
        string ans = "";
        while (bas10 > 0) {
            ans= to_string(bas10%2) +ans;
            bas10/=2;
        }
        
        cout << ans <<  "\n";
    }
}
int main() {
 
    solve();
  
  
  

  return 0;
}