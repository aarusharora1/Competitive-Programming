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
        string s ; cin >> s;
        vi pre (s.size());
            if (s[0] == '+') {pre[0]=1;}
        else {pre[0]= -1;}
        for (int i =  1; i <s.size() ; i++) {
            if (s[i] == '+') {pre[i] = 1+pre[i-1];}
            else {pre[i] = pre[i-1] -1;}
        }
        if (pre[s.size() -1] >= 0) {cout << s.size() << endl; continue;}
        if (pre[s.size()-1] == -1 * s.size()) {cout << s.size() * s.size() << endl; continue;}
      //  cout << " PRE: " << endl; for (auto i : pre) {cout << i << " ";} cout <<endl;
        int ii = 0 ; 
        for (int i = 0 ; i  < pre.size(); i++) {if (pre[i] + i >= 0) {ii=i;break;}}
      //  cout << " II: " << ii <<endl;
        int ans =0; 
        for (int i = 0 ; i < s.size(); i++) {
            for (int  j =i; j < s.size(); j++) {
              //  cout << " PRE: " << pre[j] << "  I : " << i << endl;
                if (pre[j] + i >= 0) {ans+= j;break;}
            }
        }
        cout << ans << endl;
    }
  

  return 0;
}