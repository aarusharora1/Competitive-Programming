#include <bits/stdc++.h>
using namespace std;
#define fori(i , a ,b) for (int  q = i ; q < a; q +=b )
#define vi vector<int>
typedef long long ll;
const int maxc = 1e9;
int main() {
    int n = 0;
    cin >>n;
    vi a (n);
    for (int i = 0 ; i< n ;i++) {
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    int ans = 0;
    for (int i = 0 ; i < n; i++) {
        int j = i + 1;
        while (j < n && (a[j] -a[i] <= 5)) {j++;}
        ans = max(ans,j-i);
    }
    cout << ans << "\n";
  
  

  return 0;
}