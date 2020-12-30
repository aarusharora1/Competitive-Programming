#include <bits/stdc++.h>
using namespace std;
#define fori(i , a ,b) for (int  q = i ; q < a; q +=b )
#define vi vector<int>
typedef long long ll;
const int maxc = 1e9;
int main() {
  int t = 0;
  cin >> t;
  while (t--) {
      ll a = 0 ,b = 0 ,x = 0 , y = 0, n = 0;
      cin >> a >> b >> x >> y >> n;
      if ( (a-x) > n && (b - y) > n) {
          if (a >b) {
              b-=n;
              }
            else {
                a-=n;
            }
            cout<<a*b<<"\n";continue;
      }
      if ( x  < y) {
         if (a-x <n) {n-= (a-x);
             a = x; 
             b-= min(n,b-y);
         }
         else {
             a-= n;
         }

         cout << a * b << "\n";
      }
      else if (x > y){
          if (b-y < n) {n-= (b-y);
            b = y; 
           // cout <<" N : "<< n ;
             a-= min(n,a-x);
         }
         else {
             b-= n;
             //cout << "p";
         }
         cout << a * b << "\n";
      }
      else {
          if (a < b) {
              if (a - x <n) {
                  n-=(a-x);
                  a=x;
                  b-=min(n,b-y);
              }
              else {
                  a-=n;
              }
          }
          else {
              if (b-y < n) {n-= (b-y);
            b = y; 
           // cout <<" N : "<< n ;
             a-= min(n,a-x);
         }
         else {
             b-= n;
             //cout << "p";
         }
          }
        cout << a * b << "\n";
      }
  }
  
  

  return 0;
}