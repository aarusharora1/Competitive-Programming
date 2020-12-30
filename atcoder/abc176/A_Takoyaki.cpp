#include <bits/stdc++.h>
using namespace std;
#define fori(i , a ,b) for (int  q = i ; q < a; q +=b )
#define vi vector<int>
typedef long long ll;
int main() {
  long double n  = 0 , x = 0 , t = 0;
  cin >> n >> x >> t;
  if (fmod(n,x) ==0) {
      cout << fixed<<setprecision(0) <<(n/x) * t << "\n";
  }
  
  else {
      cout << fixed<<setprecision(0)<<ceil(n/x) * t << "\n";
  }
  

  return 0;
}