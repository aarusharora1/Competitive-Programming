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
    vi a (n);
    for (int i =0 ; i < n; i++) {
        cin >> a[i];

    }
    for (int i = 0 ; i < n/2; i++) {
        cout << a[i] << " " << a[n-i-1]<< " ";
    }
    if (n % 2 == 1) {cout << a[n/2] << " ";}
    cout << "\n";
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