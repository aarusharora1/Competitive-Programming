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
    int a = 0 , b = 0 , c = 0 ;
    for (int i = 0 ; i < n ; i++) {
        int q;
        cin >> q;
        a+=q;
        cin >> q;
        b += q;
        cin >> q;
        c +=q;
    }
    //cout << a << " " << b << " " << c;
    if (a == 0 && b == 0 && c == 0) {cout << "YES\n";}
    else {cout << "NO\n";}
}
int main() {
   ios_base::sync_with_stdio(false); 
    cin.tie(NULL);   
 
    solve();
  
  
  

  return 0;
}