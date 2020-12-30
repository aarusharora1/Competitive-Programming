#include <bits/stdc++.h>
using namespace std;
#define fori(i , a ,b) for (int  q = i ; q < a; q +=b )
#define vi vector<int>
typedef long long ll;
const int maxc = 1e9;

bool comp(pair<int,int> a, pair<int,int> b) {
    if (a.first != b.first) {
        return a.first < b.first;
    }
    return a.second < b.second;
}

int main() {
  int t = 0;
  cin >> t;
  for (int qq  = 1 ; qq <= t; qq++) {
      int n = 0 , x = 0;
      cin >> n >> x;
      vector<pair<int,int>> a(n);
      for (int i = 0 ; i <n ;i ++) {
          int q;
          cin >> q;
          if (q % x == 0) {a[i]=make_pair((q/x), i+1);}
          else {a[i] = make_pair((q/x)+1, i+1);}
      }
      cout << "Case #" << qq << ": ";
      sort(a.begin(),a.end(),comp);
      for (int i = 0 ; i<n; i++) {
          cout << a[i].second << " ";
      }
      cout << "\n";
  }
  
  

  return 0;
}