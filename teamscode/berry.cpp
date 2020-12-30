#include <bits/stdc++.h>
using namespace std;
#define fori(i , a ,b) for (int  q = i ; q < a; q +=b )
#define vi vector<int>
typedef long long ll;
const int maxc = 1e9;
void solve() {
    ll n = 0;
     cin >> n;
     ll sum = 0; 
     for (ll i = 0 ;i  < n ; i++) {
         ll q; cin >> q; sum+=q;
     }
     cout << sum << "\n";
}
int main() {

    solve();
  
  
  

  return 0;
}