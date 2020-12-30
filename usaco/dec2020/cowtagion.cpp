#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<vector<int>> edges(100000);
vector<bool> visited (1000000);
int answer = 0;
void dfs(int a, int parent) {
    if (visited[a]) {return;}
    visited[a] =true;
    int ans = 0;
    if (parent != 0) {ans--;}
    ans += edges[a].size();
    
    
    ans += ceil(log2(ans+1));
    answer+=ans;
    //cout << "AT A=" << a << " ans added was " << ans << "\n";
    for (int i = 0 ;i < edges[a].size(); i++) {
        if (edges[a][i] == parent) {continue;}
        dfs(edges[a][i],a);
    }
}
int main() {
   ios_base::sync_with_stdio(false); 
    cin.tie(NULL);   
    int n;
    cin >> n;
    for (int i = 0 ; i < n-1 ; i++) {
        int a, b;
        cin >> a >> b;
        edges[a].push_back(b);
        edges[b].push_back(a);
    }
    dfs(1,0);
  cout << answer << "\n";
  
  

  return 0;
}