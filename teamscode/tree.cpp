#include <bits/stdc++.h>
using namespace std;
#define fori(i , a ,b) for (int  q = i ; q < a; q +=b )
#define vi vector<int>
typedef long long ll;
const int maxc = 1e9;
vector<pair<int,int>> a (100000);
vector<vector<int>> ans (100000);
vector<bool> visited (1000000);
int n, m;
void dfs(int node, int parent, vector<int> path) {
    if (visited[node]) {return;}
    visited[node]=true;
    path.push_back(node);
    for (int i = 0 ; i < n - 1; i++) {
        if (a[i].first == node) {
            dfs(a[i].second, node, path);
        }
    }
    ans[node] = path;
}
void solve() {
    
    cin >> n >> m;
    int q1, q2;
    for (int i =0 ; i< n -1; i++) {
        cin >> q1 >> q2;
        a[i] = make_pair(q1,q2);
    }
    dfs(1,-1, {});
    for (int i = 0 ; i < m ; i++) {
        int q1, q2; cin >> q1  >> q2;
        if (q1 == q2) {cout << ans[q1][ans[q1].size()-2] << "\n";continue;}
        vi path1 = ans[q1];
        vi path2 = ans[q2];
        int j = 0;
        while (j < min(path1.size(),path2.size()) && path1[j] == path2[j]) {j++;}
        cout << path1[j-1] << "\n"; 
    }
    //cout << "\n thing\n";
    //for (int i = 0; i < n ; i++) {
     //   for (int j = 0; j < ans[i].size(); j++) {
    //        cout << ans[i][j] << " ";
    //    }
    //    cout << "\n";
    //}

    
}
int main() {
   ios_base::sync_with_stdio(false); 
    cin.tie(NULL);   

    solve();
  

  

  return 0;
}