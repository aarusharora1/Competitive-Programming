#include <bits/stdc++.h>
using namespace std;
#define fori(i , a ,b) for (int  q = i ; q < a; q +=b )
#define vi vector<int>
typedef long long ll;
const int maxc = 1e9;
int main() {
  string s;
  cin >>s;
  if (s[s.size()-1] == 's') {
      cout << s << "es\n";
  }
  else {
      cout << s << "s\n";
  }
  
  

  return 0;
}