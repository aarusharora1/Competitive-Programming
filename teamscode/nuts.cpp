#include <bits/stdc++.h>
using namespace std;
#define fori(i , a ,b) for (int  q = i ; q < a; q +=b )
#define vi vector<int>
typedef long long ll;
const int maxc = 1e9;
void solve() {
    int n;
    cin >> n;
    vector<int> a (n);
    int m;
    cin >> m;
    for (int i =0 ;i <m ; i++) {
        int q, qq; cin >> q >> qq;
        a[q-1] += qq;
    }
    for (int i = 0 ; i < n ; i++) {
        cout << a[i] << " ";
    }
    cout << "\n";
}
int main() {
  
    solve();
  
  
  

  return 0;
}