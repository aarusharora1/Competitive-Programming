#include <bits/stdc++.h>
using namespace std;
#define fori(i , a ,b) for (int  q = i ; q < a; q +=b )
#define vi vector<int>
typedef long long ll;
const int maxc = 1e9;
void solve() {
    //ifstream fin("breedflip.in");
    //ofstream fout("breedflip.out");
    string s;
    cin >> s;
    int left = 0; int right = 0; int question = 0;
    for (int i = 0 ; i  < s.size() ; i++) {
        if (s[i] == '(') {left++;}
        if (s[i] == ')') {right++;}
        if (s[i] == '?') {question++;}
        if (right - left - question > 0) {cout << "NO\n";return;}

    }
    if (s.size() % 2 == 1 || s[s.size()-1] == '(' || s[0] == ')' || left-right-question>0) {cout << "NO\n"; return;}
    cout << "YES\n";
    
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