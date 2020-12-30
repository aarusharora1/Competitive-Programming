
// Problem: D. Ceil Divisions
// Contest: Codeforces - Educational Codeforces Round 101 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1469/problem/D
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

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
    cin >> n;
    vector<pair<int,int>> ans;
    ans.push_back({n, 2});
    for (int i = 2; i < n; i++) {
    	ans.push_back({i, i+1});
    }
    ans.push_back({n-1,n});
    cout << ans.size() << "\n";
    for (int i = 0 ; i  < ans.size() ; i++) {
    	cout << ans[i].first << " " <<ans[i].second << "\n";
    }
    return;
}
int main() {
   ios_base::sync_with_stdio(false); 
    cin.tie(NULL);   
 	int t;
 	 cin >> t;
 	 while (t--) {
    solve();}
  
  
  

  return 0;
}