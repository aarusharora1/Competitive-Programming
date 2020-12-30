#include <bits/stdc++.h>
using namespace std;
#define fori(i , a ,b) for (int  q = i ; q < a; q +=b )
#define vi vector<int>
typedef long long ll;
const int maxc = 1e9;
void solve() {
    //ifstream fin("breedflip.in");
    //ofstream fout("breedflip.out");
    int n;
    cin >> n;
    vi a(n);
    vi pre(n+1);
    for (int i = 0 ; i < n ; i++) {cin >> a[i];pre[i] += a[i];if(i>0){pre[i]+=a[i-1];}}
    pre[n] = pre[n-1];
    int an = 0;
    for (int i = 0 ; i < n ; i++) {
    	for (int j = i; j < n; j++) {
    		
    		int ans = pre[j+1]- pre[i]; 
    		cout << " i " << i << " j " << j << " ans " << ans << "\n";
    		if (ans % (j-i + 1) != 0) {continue;}
    		ans /= (j-i + 1);
    		
    		bool ans2 = false;
    		for (int q = i; q <= j; q++) {if (a[q] == ans) {ans2=true;} }
    		if (ans2) {an++;}
    	}
    }
    cout << an << "\n";
    
    
}
int main() {
   ios_base::sync_with_stdio(false); 
    cin.tie(NULL);   
 
    solve();
  
  
  

  return 0;
}