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
int main() {
  int t;
  cin >> t;
    while (t--) {
        string s; cin >> s;
        vector<char> ss (s.begin(),s.end());
        int it = 0; int ans = 0 ; 
        while (it < ss.size()- 1 && ss.size() >= 2) {
            //cout << " HERE" << it << " " << ss.size()<< endl;
            if (ss[it] != ss[it+1]) {
                //cout <<  "   @:  " << endl;
                ans++;  ss.erase(ss.begin()+it); ss.erase(ss.begin()+it);it=0;
            }
            else {it++;}
        }
        if (ans % 2 == 0) {cout << "NET" <<endl;}
        else {cout << "DA" <<endl;}
    }
  

  return 0;
}