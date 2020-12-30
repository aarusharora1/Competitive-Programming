#include <bits/stdc++.h>
using namespace std;
#define fori(i , a ,b) for (int  q = i ; q < a; q +=b )
#define vi vector<int>
typedef long long ll;
const int maxc = 1e9;
void solve() {
    //ifstream fin("breedflip.in");
    //ofstream fout("breedflip.out");
    int n , k;
    cin >> n >> k;
    vi a(n);
    for (int i = 0 ; i < n ; i++) {
        cin >> a[i];
    }
    for (int i = 1; i < n ; i++) {
        if (a[i] - a[i-1] >k) {cout << "NO\n"; return;}
    }
    int de = 0;
    int in = 0;
    int change = 0;
    for (int i = 1 ; i < n ; i++) {
        if (a[i] > a[i-1]) {
            in++;
            if (in == 1) {
                if (de > 0) {if (change/de > k) {cout << "NO\n";return;}}
                change = 0;
            }
            change += a[i] - a[i-1];
        }
        else {
            de++;
            if (de == 1) {
                if (in > 0) {if (change / in > k) {cout << "NO\n"; return;}
                change = 0;}

            }
            change += abs(a[i] - a[i-1]);
        }
    }
    if (abs(a[0] - a[1]) ==k || abs(a[n-1] - a[n-2]) == k) {cout << "NO\n"; return;}
    cout << "YES\n"; return;

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