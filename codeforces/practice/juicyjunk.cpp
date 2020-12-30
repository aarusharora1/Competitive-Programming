#include <bits/stdc++.h>
using namespace std;
#define fori(i , a ,b) for (int  q = i ; q < a; q +=b )
#define vi vector<int>
typedef long long ll;
const int maxc = 1e9;
int main() {
  vi a = {0,0,0};
  for (auto i : a) {cout << i << " ";}cout << "\n";
int ans  = a[a.size()-1]+1;
if (a[0] != 0 ) {ans = 0;}

  for (int i = 1 ; i < a.size(); i++) {
      if (a[i] - a[i-1] > 1) {ans = a[i-1]+1;}
  }
  
  cout<< ans << "\n";   
  
  

  return 0;
}