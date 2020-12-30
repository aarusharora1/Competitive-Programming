#include <bits/stdc++.h>
using namespace std;
#define fori(i , a ,b) for (int  q = i ; q < a; q +=b )
#define vi vector<int>
typedef long long ll;
const int maxc = 1e9;
int main() {
  int t = 0;
  cin >> t;
  for (int qq  = 1 ; qq <= t; qq++) {
      int n = 0 , k = 0;
      cin >> n  >> k;
      vector<pair<int,int>> a(n);
      for (int i = 0 ; i <n; i++ ) {
          cin >> a[i].first >>a[i].second;
      }
      sort(a.begin(),a.end());
      
      
    cout << "Case #" << qq << ": ";
  }
  
  

  return 0;
}