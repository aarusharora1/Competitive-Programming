#include <bits/stdc++.h>
using namespace std;
#define fori(i , a ,b) for (int  q = i ; q < a; q +=b )
#define vi vector<int>
typedef long long ll;
const int maxc = 1e9;
void solve() {
    //ifstream fin("breedflip.in");
    //ofstream fout("breedflip.out");
    int n , t;
    cin >> n >> t;
    vector<char> a (n);
    for (int i = 0 ; i < n ; i++) {cin >> a[i];}
    for (int i  = 0 ; i < t; i++) {
        for (int j = 0 ; j < n-1 ; j++) {
            if (a[j] == 'B' && a[j+1] == 'G') {swap(a[j],a[j+1]);j++;}
            
        }
    }
    for (int i = 0 ; i < n ; i++) {cout << a[i] ; } cout << "\n";
}
int main() {
   ios_base::sync_with_stdio(false); 
    cin.tie(NULL);   
 
    solve();
  
  
  

  return 0;
}