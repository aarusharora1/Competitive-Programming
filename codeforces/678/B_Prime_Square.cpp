#include <bits/stdc++.h>
using namespace std;
#define fori(i , a ,b) for (int  q = i ; q < a; q +=b )
#define vi vector<int>
typedef long long ll;
const int maxc = 1e9;
bool isPrime(int a) {
    bool ans = true;
    for (int i = 2; i*i <= a; i++) {
        if (a % i == 0) {ans=false;}
    }
    return ans;
}
int main() {
  int t = 0;
  cin >> t;
  while (t--) {
      int n ;
       cin >>n;
       int ans = 0;
       
       for (int i = n; i < 200; i++) {
           if (isPrime(i) && !isPrime(i-n+1)) {
               ans = i; break;
           }
       }
       for (int i = 0 ; i < n ; i++) {
           for (int j = 0 ; j < n ; j++) {
               if (i == j) {cout << (ans-n+1) << " ";}
               else {cout << 1 << " ";}
           }
           cout << "\n";
       }
  }
  
  

  return 0;
}