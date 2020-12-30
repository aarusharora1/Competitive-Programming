#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <stdio.h>
#include <vector>
#include <math.h>
using namespace std;
#define fori(i , a ,b) for (int  q = i ; q < a; q +=b )
#define vi vector<int>
typedef long long ll;
int main() {
  ll t;
  cin >> t;
  ll ans = 1;
  vector<char> th = {'c','o','d','e','f','o','r','c','e','s'};
  while ((pow(ans,10) < t)) {
      ans++;
  }
  //cout << " HEREL 1 " << endl;
  ans--;
  if (t == 1 ) {cout << "codeforces\n" ; return 0;}
  /*if (ans <= 1) {
      cout << "codeforce" << string(t,'s')<< endl; return 0;
  }*/

  ll ans2 = pow(ans,10), ans3 = 0;
   // cout << " ANS: " << ans << " ANS :  2 : " << ans2<<endl;
  while (ans2 < t && ans3 < 10) {
      ans3++;
      ans2 = ans2 * ((double)(ans+1 ) / ans);
              //cout << " ANS2 : " << ans2 << " ANS + 1 " << ans+1 <<   endl; 
  }
  //cout << " HEREL 2 " << endl;

  for (int i = 0 ; i < ans3 ; i++) {
      cout << string(ans+1,th[i]);
  }
  for (int i = ans3; i < 10 ; i ++) {
      cout << string(ans, th[i]) ;
  }
  cout << endl;

  return 0;
}