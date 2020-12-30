#include <bits/stdc++.h>
using namespace std;
#define fori(i , a ,b) for (int  q = i ; q < a; q +=b )
#define vi vector<int>
typedef long long ll;
const int maxc = 1e9;
int main() {
  int t = 0;
  cin >> t;
  while (t--) {
      ll a = 0 , b = 0;
      cin >> a >> b;
        if (abs(a-b) % 10 == 0) {cout << (abs(a-b)/10)  << "\n";continue;}
      cout << (abs(a-b) /10)+1<<"\n";
  }
  
  

  return 0;
}