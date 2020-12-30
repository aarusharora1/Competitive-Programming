#include <bits/stdc++.h>
using namespace std;
#define fori(i , a ,b) for (int  q = i ; q < a; q +=b )
#define vi vector<int>
typedef long long ll;
const int maxc = 1e9;
int main() {
  int n = 0, m = 0;
  cin >> n >> m;
  vector<vi> a (n);
  for (int i = 0 ; i <n ; i++) {
      vi b(m);
      for (int q = 0 ; q < m; q++) {
          cin >>b[q];
      }
      a[i]=b;
  }
  if (n % 2 == 1) {cout << n << "\n";}
  else {
      for (int i = n ; i > 0 ; i/=2) {
          
      }
  }


  
  

  return 0;
}