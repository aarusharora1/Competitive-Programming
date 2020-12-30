#include <bits/stdc++.h>
using namespace std;
#define fori(i , a ,b) for (int  q = i ; q < a; q +=b )
#define vi vector<int>
typedef long long ll;
const int maxc = 1e9;
void solve() {
    int n, m;
    cin >> n >> m;
    vector<vi> rows (n);
    vi col (n);
    for (int i = 0 ; i < n ; i ++) {
        vi a(m);
        for (int j = 0 ; j < m; j++) {
            cin >> a[j];
        }
        rows[i] = a;
    }
   
    for (int i = 0 ; i < n ; i++) {cin>>col[i];}
    int q; for (int i =1; i <m; i++) {for (int j = 0; j < n; j++) {cin >>q;}}
    vector<vi> ans(n);
    for (int i = 0 ; i < n ; i++) {
        int aa = col[i];
        for (int j = 0 ; j < n ; j++) {
            for (int q = 0; q < m; q++) {
            if (rows[j][q] == aa) {ans[i] = rows[j]; break;}}
        }
    }
    for (int i = 0 ; i <n ; i++) {
        for (int j = 0 ; j < m ; j++) {
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }
}
int main() {
  int t = 0;
  cin >> t;
  while (t--) {
    solve();
  }
  
  

  return 0;
}