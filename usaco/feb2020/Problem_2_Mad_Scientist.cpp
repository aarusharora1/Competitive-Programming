#include <bits/stdc++.h>
using namespace std;
#define fori(i , a ,b) for (int  q = i ; q < a; q +=b )
#define vi vector<int>
typedef long long ll;
const int maxc = 1e9;
void solve() {
     ifstream fin("breedflip.in");
    ofstream fout("breedflip.out");
    int n;
    fin >>n;
    vector<char> a(n);
    vector<char> b(n);
    for (int i = 0 ; i < n ;i++) {
        fin >> a[i];
    }
    for (int i = 0 ; i < n ;i++) {
        fin >> b[i];
    }
    int ans = 0;
    for (int i = 1; i < n ; i++) {
        if (a[i] != b[i] && a[i-1] == b[i-1]) {
            ans++;
        }
    }
    if (a[0] != b[0] && a[1] == b[1]) {ans++;}
    fout << ans << "\n";
    
}
int main() {
   ios_base::sync_with_stdio(false); 
    cin.tie(NULL);   

    solve();
  
  
  
}