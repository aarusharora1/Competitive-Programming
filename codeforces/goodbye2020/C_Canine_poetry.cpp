#include <bits/stdc++.h>
using namespace std;
#define fori(i , a ,b) for (int  q = i ; q < a; q +=b )
#define vi vector<int>
typedef long long ll;
const int maxc = 1e9;
void solve() {
    //ifstream fin("breedflip.in");
    //ofstream fout("breedflip.out");
    string s; cin >> s;
    int ans = 0 ;
    if (s.size() == 1) {cout << "0\n"; return;}
    if (s.size() == 2) {if (s[0] == s[1]) {cout << "1\n"; return;} else {cout << "0\n"; return;}}
    if (s[0] == s[1]) {ans++;s[1] = '?';}
    for (int i = 2; i < s.size() ; i++) {
        if (s[i] == s[i-1] || s[i] == s[i-2]) {
            ans++; s[i] = '?';
        }
    }
    cout << ans << "\n";

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