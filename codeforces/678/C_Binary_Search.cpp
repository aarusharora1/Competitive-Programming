#include <bits/stdc++.h>
using namespace std;
#define fori(i , a ,b) for (int  q = i ; q < a; q +=b )
#define vi vector<int>
typedef long long ll;
const int maxc = 1000000007;
ll fact(ll a) {
    ll ans = 1;
    for (ll i = 1; i <= a; i++) {ans= (ans * i)%maxc;}
    return ans%maxc;
}
int main() {
  ll n , x ,pos;
  cin >> n >> x >>pos;
  ll l = 0, r = n;
  ll less =0 , great = 0;
  while (l < r) {
    ll middle = (l+ r)/2;
    cout << " L: " << l << " R: " << r << " MIL " << middle << "\n";
    if (middle == pos) {l=middle+1;}
    else if (middle < pos) {less++;l=middle+1;}
    else {great++;r=middle;}
  }
  cout << great << " " << less << "\n";

    //great: can be n-x
    //less: can be x
    ll lll = (fact(x-1) / fact(x-1-less)) % maxc;
    ll ggg = (fact(n-x) / fact(n-x-great)) % maxc;
    cout << (lll * ggg) % maxc << "\n";

  return 0;
}