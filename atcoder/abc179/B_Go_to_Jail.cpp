#include <bits/stdc++.h>
using namespace std;
#define fori(i , a ,b) for (int  q = i ; q < a; q +=b )
#define vi vector<int>
typedef long long ll;
const int maxc = 1e9;
int main() {
  int n = 0;
  cin >> n;
  int count = 0; bool g = false;
  for (int i = 0 ; i< n; i++) {
      int a, b;
      cin >> a >> b;
      if (a == b) {count++;if (count == 3) {g=true;}}
      else {count = 0;}
  }
  if (g) {cout << "Yes\n";}
  else {cout << "No\n";}
  
  
  

  return 0;
}