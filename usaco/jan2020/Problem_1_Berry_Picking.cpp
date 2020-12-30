#include <bits/stdc++.h>
using namespace std;
#define fori(i , a ,b) for (int  q = i ; q < a; q +=b )
#define vi vector<int>
typedef long long ll;
const int maxc = 1e9;
void solve() {
    int n , k;
    cin >> n >> k;
    vi a(n);
    int maxb = 0;
    for (int i =0 ; i < n; i++) {
        cin >>a[i]; maxb=max(maxb,a[i]);
    }
    int ans = 0;
    for (int i =1 ; i <= maxb; i++) {
        vector<int> b = a;
        int cur = 0; int cur2=k;
        for (int j = 0 ; j < n ; j++) {
            while (b[j] > i && cur2>0) {b[j]-=i;cur+=i;cur2--;}
        }
        if (cur2 > 0) {
            sort(b.begin(),b.end());
            int j = n-1;
            while (cur2>0) {cur+=b[j];j--;cur2--;}
        }
        cout << " CUR " << cur << " \n";
        ans = max(ans,cur);
    }
    cout << ans/2 << "\n";
}
int main() {
   ios_base::sync_with_stdio(false); 
    cin.tie(NULL);   
  freopen("berries.in","r",stdin);
  freopen("berries.out","w",stdout);
    solve();
  
  
  

  return 0;
}