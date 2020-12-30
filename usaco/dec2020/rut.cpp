#include <bits/stdc++.h>
using namespace std;


struct Cow {
    int startx;
    int starty;
    int index;
    char direc;
    //bool operator<(const Cow& y) { return true;}//if (direc == 'E') {return starty < y.starty;} else {return startx < y.startx;}}
};
bool operator<(const Cow& x, const Cow& y) { if (x.direc == 'E') {return x.starty < y.starty;} else {return x.startx < y.startx;} }
vector< pair<int,int> > Edges ;
vector<int> Answer (1001);
vector<bool> visited(1001);
vector<bool> stopped(1001);
int  dfs(int a) {
    if (visited[a]) {return Answer[a];}
    visited[a] =true;
    int ans = 0;
    for (int i = 0 ;i < Edges.size(); i++) {
        if (Edges[i].first == a) {ans++;ans+=dfs(Edges[i].second);}
    }
    Answer[a] = ans;
    return ans;
}
int main() {
   ios_base::sync_with_stdio(false); 
    cin.tie(NULL);   
 
    int n;
    cin >> n;
    vector<Cow> East ;
    vector<Cow> North ;
    for (int i = 0; i < n ; i++) {
        char c; int a, b;
        cin >> c >>a >> b;
        Cow q = {a,b,i,c};
        if (c == 'E') {East.push_back(q);}
        else {North.push_back(q);}
    }
    sort(East.begin(),East.end());
    sort(North.begin(),North.end());

    for (int i = 0 ;i < East.size(); i++) {
        Cow q = East[i];
        for (int j = 0 ; j < North.size() ; j++) {
            Cow a = North[j];
            //cout << " COW: " << q.index << " " << stopped[q.index] << " A: " << a.index << " " << stopped[a.index] << "\n";
            
            if (stopped[q.index] || stopped[a.index]) {continue;}
            if (q.startx > a.startx || a.starty > q.starty) {continue;}
            if ((a.startx-q.startx) > (q.starty - a.starty)) {stopped[q.index]=true;Edges.push_back({a.index,q.index});}
            else if ((a.startx-q.startx) < (q.starty - a.starty)) {stopped[a.index]=true;Edges.push_back({q.index,a.index});}
            
        }

    }
    for (int i = 0; i < n ; i++) {
        dfs(i);
    }
    //for (int i = 0 ; i < Edges.size(); i++) {cout << Edges[i].first << " "<<Edges[i].second << "\n";}
    for (int i = 0 ;i < n ;i++) {
        cout << Answer[i] << "\n";
    }



  
  
  

  return 0;
}