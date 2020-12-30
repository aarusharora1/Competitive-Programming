#include <bits/stdc++.h>
using namespace std;
#define fori(i , a ,b) for (int  q = i ; q < a; q +=b )
#define vi vector<int>
typedef long long ll;
const int maxc = 1e9;
void solve() {
    int n,m;
    cin >> n >>m;int dis = 0;
    vector<int>a (n); 
    for (int i = 0 ; i <m; i++) {
        int q; cin >> q;
        
        if (a[q-1] == 0) {dis++;} //cout << "A: " << a[0] << " ";
        a[q-1]++;
        if (dis == n) {
            cout << 1;
            for (int i = 0 ; i < n ; i++) {a[i]--; if (a[i] == 0) {dis--;}}
            
        }
        else {cout << 0;}
        


    }
    cout << "\n";
}
int main() {
 
    solve();
  
  
  

  return 0;
}