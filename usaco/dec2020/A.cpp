#include <bits/stdc++.h>
using namespace std;
#define fori(i , a ,b) for (int  q = i ; q < a; q +=b )
#define vi vector<int>
typedef long long ll;
const int maxc = 1e9;
void solve() {
    //ifstream fin("breedflip.in");
    //ofstream fout("breedflip.out");
    vi a(7);
    for (int i = 0 ; i < 7; i++) {
    	cin >> a[i];
    }
    sort(a.begin(),a.end());
    if (a[2] == a[0]+a[1]) {cout << a[0] << " " << a[1] << " " << a[3] << "\n";}
    else {cout << a[0] << " " << a[1] << " " << a[2] << "\n";}
}
int main() {
   ios_base::sync_with_stdio(false); 
    cin.tie(NULL);   
 
    solve();
  
  
  

  return 0;
}