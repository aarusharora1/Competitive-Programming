#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <stdio.h>
#include <vector>
#include <math.h>
using namespace std;
#define fori(i , a ,b) for (int  q = i ; q < a; q +=b )
#define vi vector<int>
typedef long long ll;

vi adj[100000];
vector<int> pop (100000);
vector<bool> visited(100000);
vector<int> num (1000000);
int dfs(int a) {
    if (visited[a]) {return num[a];}
    //cout << " A: " << a  << " POP A: " << pop[a]<<"\n";
    if (adj[a].size() == 1) {visited[a]=true;num[a]=pop[a];return pop[a];}
    int b = pop[a];
    for (auto x : adj[a]) {
        if (x == 0) {continue;}
        b+= dfs(x);
    }
    visited[a]=true;
    num[a] = b;
    return b;
}

int main() {
  int t;
  cin >> t;
    while (t--) {
        int n = 0, m = 0;
        cin >> n >> m;       
        for (int i = 0 ; i < 100000; i++) {adj[i].clear();pop[i]=0;visited[i]=false;num[i]=0;}
        fori(0,n,1) {cin>>pop[q];}
        vi hap (n);
        fori(0,n,1) {cin>>hap[q];}
        
        
        int a  = 0 , b = 0;
        for (int i = 0 ; i < n -1; i++) {
            cin >> a >> b;a--;b--;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        //cout << dfs(0) << "\n";
        dfs(0);
        bool good = true;
        for (int i = 0 ; i < n ; i++) {
            cout << " NUM : " << num [i] << "HAP : "<< hap[i] << "\n";
             if (abs(hap[i]) > num[i]) {good=false;break;}
            
        }
        if  (good) {cout << "YES\n";}
        else {cout << "NO\n";}


    }
  

  return 0;
}