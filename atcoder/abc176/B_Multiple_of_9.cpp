#include <bits/stdc++.h>
using namespace std;
#define fori(i , a ,b) for (int  q = i ; q < a; q +=b )
#define vi vector<int>
typedef long long ll;
int main() {
  ll a = 0;
  cin >> a;
  ll ans =0 ;
  while (a >= 10 ) {ans += a % 10 ; a/=10;}
  ans+=a;
  if (ans % 9 == 0) {cout << "Yes\n";}
  else {cout << "No\n";}
  

  return 0;
}