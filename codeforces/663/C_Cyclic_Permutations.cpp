#include <bits/stdc++.h>
using namespace std;
#define fori(i , a ,b) for (int  q = i ; q < a; q +=b )
#define vi vector<int>
typedef long long ll;
int main() {
  ll MOD = 1e9 + 7;
     ll n , res, fact;
    cin >> n;
	  res = 1;
	  fact = 1;
	  for(int i = 1;i <= n-1;i++){
		  res *= 2;fact *= i;
		  fact %= MOD;res %= MOD;
	  }
	  fact *= n;
	  fact %= MOD;
	  fact -= res;
	  fact %= MOD;
	  if(fact < 0)fact += MOD;
	  cout << fact;
	  return 0;
}