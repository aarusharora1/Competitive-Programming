#include <bits/stdc++.h>
using namespace std;
#define fori(i , a ,b) for (int  q = i ; q < a; q +=b )
#define vi vector<int>
typedef long long ll;
const int maxc = 1e9;
int main() {
    int n = 0 ;
    cin >> n;
    int ans = 0;
    n--;
    for (int i = 1 ; i < n; i++) {
        ans += n/i;
    }  
    cout << ans+1 << "\n";

  return 0;
}