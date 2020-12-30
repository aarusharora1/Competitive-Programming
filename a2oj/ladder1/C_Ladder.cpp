#include <bits/stdc++.h>
using namespace std;
#define fori(i , a ,b) for (int  q = i ; q < a; q +=b )
#define vi vector<int>
typedef long long ll;
const int maxc = 1e9;
void solve() {
    //ifstream fin("breedflip.in");
    //ofstream fout("breedflip.out");
    int n , m;
    cin >> n >> m;
    vi a(n);
    for (int i = 0 ;i < n ; i++) {
        cin >> a[i];
    }
    vi maxx(n);
    vi minn(n);
    for (int i = 1; i < n -1; i++) {
        if (a[i] > a[i-1] && a[i] > a[i+1]) {maxx[i]++;}
        if (a[i] < a[i-1] && a[i] < a[i+1]) {minn[i]++;}

    }
    for (int i = 1; i < n ; i++) {
        maxx[i] += maxx[i-1];
        minn[i] += minn[i-1];
    }
    //for (auto i : minn) {cout << i << " ";} cout << "\n";

    for (int i = 0 ; i < m; i++) {
        int l , r;
        cin >> l >> r;
        l--;r--;
        if (minn[l] == minn[r-1] || l == r || r-l == 1) {cout << "Yes\n";}
        else {cout << "No\n";}
    }
}
int main() {
   ios_base::sync_with_stdio(false); 
    cin.tie(NULL);   
 
    solve();
  
  
  

  return 0;
}