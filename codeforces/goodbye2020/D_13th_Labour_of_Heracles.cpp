#include <bits/stdc++.h>
#include <unistd.h>
using namespace std;
#define fori(i , a ,b) for (int  q = i ; q < a; q +=b )
#define vi vector<int>
typedef long long ll;
const int maxc = 1e9;

vector<pair<int,int>> w (100001);
vector<vi> edges (100001);
vector<bool> visited(100001);
vector<int> an2(100001);
int n;
int dfs(int i , int p ) {
   // cout << " DFS : " << i << " " << p << "\n";
    if (visited[i]) {return an2[i];}
    visited[i]=true;
    int an3= 0;
    for (int q=  0 ;q < n ; q++ ) {if (w[q].second==i) {an3+= w[q].first;break;}}
    for (int j  = 0 ; j < edges[i].size(); j++) {
        if (edges[i][j] == p) {continue;}
        an3+=dfs(edges[i][j],i);
    }
    an2[i] = an3;
    return an3;
}


void solve() {
    //ifstream fin("breedflip.in");
    //ofstream fout("breedflip.out");
    
    cin >> n;
    
    
   
//   for (int i = 0 ; i < 5 ; i++) {
//         for (int j = 0 ; j < edges[i].size(); j++) {
//           cout << " e " << i << " " << edges[i][j]  << "\n";
//       }
//         cout << " AN " << an2[i] << "\n";
//     }

    for (int i = 0 ; i < n ; i++) {cin >> w[i].first; w[i].second=i;}
    sort(w.begin(),w.end());
    reverse(w.begin(),w.end());
    
    for (int i =  0 ; i < n -1; i++) {
        int a , b;
        cin >> a  >> b;
        a--;b--;
        edges[a].push_back(b);
        edges[b].push_back(a);
    }
    vi ans;
    for (int i = 0 ; i < n ;i ++) {
        pair<int,int> th = w[i];
        if (edges[th.second].size() == 1) {continue;}
        for (int q = 0 ; q < edges[th.second].size(); q++ ) {
            ans.push_back(th.first);
        }
    }
    if (ans.size() == 0) {cout << dfs(0,-1) << "\n"; w.clear();
    for (int i = 0 ; i < n ; i++) {
        edges[i].clear();
        visited[i] = false;
        an2[i] = 0;
    }return;}
    ans[0] = 0;
    ans[0] += dfs(0,-1); 
   //for (int i = 0 ; i < n ; i++) {cout << ans[i] << " "; }cout << "\n";
   
    for (int i = 1; i < n; i++) {
        ans[i] += ans[i-1]; 
        cout << ans[i-1] << " ";
    }
    //cout << ans[n-1];
    cout << "\n";
    w.clear();
    for (int i = 0 ; i < n ; i++) {
        edges[i].clear();
        visited[i] = false;
        an2[i] = 0;
    }


}
int main() {
   ios_base::sync_with_stdio(false); 
    cin.tie(NULL);   
 int t;
 cin >> t;


  while (t--) {

// cout << "Initializing " << t << "\n";
    // for (int i = 0 ; i < 100001; i++) {
            
    //     an2[i]= 0;
    //     visited[i]=0;
    // }
    //cout << "Solving " << t << "\n";
    solve();
//    solve(visited,an2,edges,w);
    ///cout << "Solved going to sleep\n";
    cout.flush();
    //sleep(2);
  }
  
  

  return 0;
}