#include <bits/stdc++.h>
using namespace std;
#define fori(i , a ,b) for (int  q = i ; q < a; q +=b )
#define vi vector<int>
typedef long long ll;
const int maxc = 1e9;
void solve() {
    //ifstream fin("breedflip.in");
    //ofstream fout("breedflip.out");
    int n, m;
    cin >> n;
    vi r(n);
    vi pr(n);
    for (int i =0 ; i < n ; i++) {cin >> r[i];pr[i]=r[i];if (i>0){pr[i]+=pr[i-1];}}
    cin >> m;
    vi b(m);
    vi pb(m);
    for (int i =0 ; i < m; i++) {cin >> b[i]; pb[i]=b[i];if (i>0){pb[i]+=pb[i-1];}}
    int ans = 0;
    int maxr = 0;
    int maxb = 0;
    for (int i = 0 ;i < n ;i++) {maxr=max(maxr,pr[i]);}
    for (int i = 0 ;i  < m ; i++) { maxb = max(maxb, pb[i]);}
   // for (auto i : pr ) {cout << i << " ";} cout << "\n";
    cout << maxr + maxb  << "\n";
    
}
int main() {
   ios_base::sync_with_stdio(false); 
    cin.tie(NULL);   
    int t;
    cin >> t;
    while (t--) {
    solve();
    }
  
  

  return 0;
}