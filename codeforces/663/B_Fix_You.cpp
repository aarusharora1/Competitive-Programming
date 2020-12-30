#include <bits/stdc++.h>
using namespace std;
#define fori(i , a ,b) for (int  q = i ; q < a; q +=b )
#define vi vector<int>
typedef long long ll;
int main() {
  int t;
  cin >> t;
    while (t--) {
        int n = 0 , m = 0;
        cin >> n >> m;int ans = 0;
        if (n == 1 && m == 1) {string s;cin >> s;cout << 0 << "\n";continue;}
        if (n == 1) {string s ; cin >> s; for (int i = 0 ; i < m ; i++) {if (s[i]=='D'){ans++;}}cout<<ans<<"\n";continue;}
        if (m == 1) {string s ; for (int i = 0 ; i < n ; i++) {cin>>s;if (s[0]=='R'){ans++;}}cout<<ans<<"\n";continue;}
        
        for (int i = 0 ; i < n- 1 ; i++) {
            string s ;
            cin >> s;
            if (s[m-1] == 'R') {ans ++;}
        }
        string q;
        //cout << " ans :" << ans << "\n";
        cin >> q;
        for (int i = 0 ; i < m -1; i++) {
            if (q[i] == 'D') {ans++;}
        }
        cout << ans << "\n";
    }
  

  return 0;
}