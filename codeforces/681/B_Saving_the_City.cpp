#include <bits/stdc++.h>
using namespace std;
#define fori(i , a ,b) for (int  q = i ; q < a; q +=b )
#define vi vector<int>
typedef long long ll;
const int maxc = 1e9;
void solve() {
    int a, b;
    cin >> a >> b;
    string s;
    cin >> s;
    int dist = 0;
    int ans = 0;
    int start =0, end = 0;
    for (int i = 0; i < s.size(); i ++) {
        if (s[i] == '1'){start=i;break;}
    }
    for (int i = s.size()-1; i >= 0; i--) {
        if (s[i] == '1') {end = i; break;}
    }
    if (start == s.size()-1) {cout << "0\n";return;}
    for (int i =start ; i <=end ;i++) {
        //cout << s[i] << " p " << dist << " ans " << ans << "\n";
        if (s[i] == '0') {dist++;}
        else {
            if (dist == 0) {continue;}
            ans += min(a, (a+b)*dist);
            dist=0;
        }
    }
    cout << ans+ 1<< "\n";
}
int main() {
  int t = 0;
  cin >> t;
  while (t--) {
    solve();
  }
  
  

  return 0;
}