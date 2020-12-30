    #include <bits/stdc++.h>
using namespace std;
#define fori(i , a ,b) for (int  q = i ; q < a; q +=b )
#define vi vector<int>
typedef long long ll;
const int maxc = 1e9;
int main() {
  int t = 0;
  cin >> t;
  while (t--) {
      int n = 0 ;
      cin >> n;
      vi a(n);
      for (int i = 0 ; i <n ; i++) {
          cin >> a[i];
      }
      int i = 0 ; while (i < n && a[i] != 1) {i++;}
      int j = n-1; while (j >=0 && a[j] != 1) {j--;}
      //cout << " I : " << i << " J: " << j << "\n";
      if (i == n) {cout << 0 << "\n"; continue;}
      int ans = 0;
      for (int q = i ; q < j ; q++) {
          if (a[q] == 0) {ans++;}
      }
      cout << ans << "\n";
  }
  
  

  return 0;
}