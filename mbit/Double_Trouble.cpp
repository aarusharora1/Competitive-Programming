#include <bits/stdc++.h>
using namespace std;
#define fori(i , a ,b) for (int  q = i ; q < a; q +=b )
#define vi vector<int>
typedef long long ll;
const int maxc = 1e9;
void solve() {
    string s;
    getline(cin , s);
    int n = s.size();
    string ans = "";
    for (int i = 0 ; i < n ; i++) {
        if (s[i] == ' ') {ans+=" ";continue;}
        int j = i+1;
        while (j<n && s[j] == s[i]) {j++;}
        if (j - i == 1) {ans += s[i];}
        else if (j- i == 2) {ans += s[i];}
        else {for (int a = i ; a < j ; a++) { ans+=s[a];}}
        
       // cout << i << " j " << j << "\n";
        i=j-1;
    }
    cout << ans << "\n";
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    solve();
  
  
  

  return 0;
}