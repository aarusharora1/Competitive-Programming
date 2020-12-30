#include <bits/stdc++.h>
using namespace std;
#define fori(i , a ,b) for (int  q = i ; q < a; q +=b )
#define vi vector<int>
typedef long long ll;
int main() {
  int t;
  cin >> t;
    while (t--) {
        int n = 0 ; cin >> n;
        vi a(n);
        for (int i= 0 ; i < n ; i++) {
            cin >> a[i];
        
        }
        sort(a.begin(),a.end());
        if (n == 1 ) {cout << "YES\n";continue;}
        int ans = 0;
        for (int i = 1; i < n ; i++) {
            if (abs(a[i] - a[i-1]) > 1) {ans++;}
        }
        if (ans != 0 ) {cout << "NO\n";}
        else {cout << "YES\n";}
    }
  

  return 0;
}