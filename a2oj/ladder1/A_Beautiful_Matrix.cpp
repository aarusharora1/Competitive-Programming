#include <bits/stdc++.h>
using namespace std;
#define fori(i , a ,b) for (int  q = i ; q < a; q +=b )
#define vi vector<int>
typedef long long ll;
const int maxc = 1e9;
void solve() {
    //ifstream fin("breedflip.in");
    //ofstream fout("breedflip.out");
    int q = 0 , i = 0;
    while ( q != 1) {
        cin >> q;
        i++;
    }
    //cout << (abs(ceil(i/5.0)-3)) << " i " << i  << "\n";
    if (i%5==0) {cout << (abs(i%5-3)-1 + (abs(ceil(i/5.0)-3))) << "\n"; return;}
    cout << (abs(i%5-3) + (abs(ceil(i/5.0)-3))) << "\n";
}
int main() {
   ios_base::sync_with_stdio(false); 
    cin.tie(NULL);   
 
    solve();
  
  
  

  return 0;
}