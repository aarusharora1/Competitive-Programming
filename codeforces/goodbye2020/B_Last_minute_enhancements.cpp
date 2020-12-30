#include <bits/stdc++.h>
using namespace std;
#define fori(i , a ,b) for (int  q = i ; q < a; q +=b )
#define vi vector<int>
typedef long long ll;
const int maxc = 1e9;
void solve() {
    //ifstream fin("breedflip.in");
    //ofstream fout("breedflip.out");
    int n;
     cin >> n;
     vi a(n);
     vi count(2*n+3);
     for (int i = 0; i < n ; i++) {
         cin >> a[i]; count[a[i]]++;
     }
     //int ans = 0 ;
     sort(a.begin(),a.end());
     set<int> ans;
     //ans.insert(a[0]);
     ////for (auto i : ans ) {cout << i << " ";}
     //cout << "\n";
     //for (auto i : a) {cout << i << " " ;}
     for (int i = 0 ; i < n ; i++) {
         if (ans.find(a[i]) != ans.end()) {ans.insert(a[i]+1);}
         else {ans.insert(a[i]);}
     }
    // for (auto i : ans ) {cout << i << " ";}
     cout << ans.size() << "\n";

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