#include <bits/stdc++.h>
using namespace std;
#define fori(i , a ,b) for (int  q = i ; q < a; q +=b )
#define vi vector<int>
typedef long long ll;
const int maxc = 1e9;
void solve() {
    //ifstream fin("breedflip.in");
    //ofstream fout("breedflip.out");
    int n; cin >> n;
    vi a(n);
    vi prefix(n);
    bool good = true;

    for (int i = 0 ;i  < n ; i++) {
        cin >> a[i];
        prefix[i] +=a[i];
        
    }
    for (int i = 1; i < n ; i++) {prefix[i] += prefix[i-1];}
    for (int i = 1; i < n ; i++) {
        if (a[i] != a[i-1] ) {good=false;break;}
    }
   // cout << " PRE " ;
   // for (auto i : prefix) {cout << i << " " ; } cout << "\n";
    if (good) {cout << "0\n";return;}
    for (int i = 0 ; i < n ; i++) {
       // cout << " PR "  << prefix[i] << " " << prefix[n-1] << " ";
        if (prefix[i]*2 == (prefix[n-1])) {cout << (i-1) + (n-i-1) << "\n";return;}
    }
    cout << n -1<< "\n";
   
}
int main() {
   ios_base::sync_with_stdio(false); 
    cin.tie(NULL);   
    int t; 
    cin >> t; 
    while (t--) {
    solve();
    }
  
  

  return 0;
}