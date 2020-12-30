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
    cin >>n;
    vector<char> b (n);
    vector<int> a (n);
    for (int i = 0 ; i < n ; i++) {cin >>b[i]; a[i] = b[i]-'0';}
    if ((a[0] == 2 && a[1] == 0 && a[2] == 2 && a[3] == 0 ) || (a[n-1] == 0 && a[n-2] == 2 && a[n-3] == 0 && a[n-4] == 2)) {cout << "YES\n";}
    else if (a[0] == 2 && a[n-1] == 0 && a[n-2] == 2 && a[n-3] == 0) {cout << "YES\n";}
    else if (a[0] == 2 && a[1] == 0 && a[n-1] == 0 && a[n-2] == 2) {cout << "YES\n";}
    else if (a[0] == 2 && a[1] == 0 && a[2] ==2 && a[n-1] == 0) {cout << "YES\n";}
    else {cout << "NO\n";}
    
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