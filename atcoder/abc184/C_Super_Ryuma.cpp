#include <bits/stdc++.h>
using namespace std;
#define fori(i , a ,b) for (int  q = i ; q < a; q +=b )
#define vi vector<int>
typedef long long ll;
const int maxc = 1e9;
void solve() {
    int a, b ,c ,d;
    cin >> a >>b >> c >>d;
    if (a ==c&&b==d) {cout<<"0\n";return;}
    if (c %a == d % b) {cout << 2 << "\n";}
    else {cout << "3\n";}
}
int main() {
   ios_base::sync_with_stdio(false); 
    cin.tie(NULL);   

    solve();
  
  
  

  return 0;
}