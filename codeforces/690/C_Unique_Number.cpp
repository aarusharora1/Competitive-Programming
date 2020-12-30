#include <bits/stdc++.h>
using namespace std;
#define fori(i , a ,b) for (int  q = i ; q < a; q +=b )
#define vi vector<int>
typedef long long ll;
const int maxc = 1e9;
void solve() {
    //ifstream fin("breedflip.in");
    //ofstream fout("breedflip.out");
    int n; cin >>n;
    if (n < 10 ) {cout << n << "\n";return;}
    if (n > 45) {cout << "-1\n"; return;}
    vector<int> ans ;
    vector<int> largest = {1,2,3,4,5,6,7,8,9};
    while (n > 10) {if (largest.size()==2) {break;}
        n-= largest[largest.size()-1];
        ans.push_back(largest[largest.size()-1]);
        largest.erase(largest.begin()+largest.size()-1);
    }

    //for (auto i : ans) {cout << i << " ";}
    if (largest.size()>=n) {ans.push_back(n);}
    else {
        while (n > 0) {if (largest.size()==0) {cout<<"-1\n";return;} if (largest.size() >= n) {ans.push_back(n);n=0;} else {n-= largest[largest.size()-1];
        ans.push_back(largest[largest.size()-1]);
        largest.erase(largest.begin()+largest.size()-1);}}
    }
    sort(ans.begin(),ans.end());
    for (auto i:ans) {cout << i ;} cout<<"\n";
    
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