#include <bits/stdc++.h>
using namespace std;
#define fori(i , a ,b) for (int  q = i ; q < a; q +=b )
#define vi vector<int>
typedef long long ll;
const int maxc = 1e9;
void solve() {
 int n, c;
 cin >> n >> c;
 int ans = c;
 for (int i = 0 ; i < n ; i++) {
     char x; cin >> x;
     if (ans == 0 && x=='x') {continue;}
     if (x=='x') {ans--;}
     if (x =='o') {ans++;}
 }
    cout << ans << "\n";
}
int main() {
   ios_base::sync_with_stdio(false); 
    cin.tie(NULL);   
 
    solve();
  
  
  

  return 0;
}