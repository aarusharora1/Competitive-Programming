#include <bits/stdc++.h>
using namespace std;
#define fori(i , a ,b) for (int  q = i ; q < a; q +=b )
#define vi vector<int>
typedef long long ll;
const int maxc = 1e9;
vector<int> a ( 1000000001);

int main() {

   ios_base::sync_with_stdio(false); 
    cin.tie(NULL);   
freopen("herding.in","r",stdin);
    freopen("herding.out","w",stdout);
    cout<<"";
    int n; cin >> n;
    int maxb = 0;
    for (int i = 0 ; i < n ; i++) {int q;cin >>q ; a[q]++;maxb=max(maxb,q);}
    for (int i = 1 ; i <= maxb; i++) {
        a[i] += a[i-1];
        if (i >= n) {a[i]-=a[i-n];}
    }
    int a1 = 0, a2 = n;
    for (int i = 0 ; i <= maxb; i++) {
        a1 = max(a1,a[i]);
        a2 = min(a2,a[i]);
    }
    cout << n-a1-1 << endl << n-a2-1 << "\n";
  
  
  
  

  return 0;
}