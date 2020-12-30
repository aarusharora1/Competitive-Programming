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
        ll n = 0;cin>>n;
        ll a = pow(n,0.5);
        ll aa = 0 , bb=0;
        for (ll b  = a+1 ; b > 0 ;b --) {
            if (n% b == 0) {
                aa = ((n/b)-1) * b; bb = b; break;
            }
        }
        if (n%2 ==0) {cout << n/2  << " " << n/2 << endl;}
        else if (aa==0) {cout << 1 << " " << n-1<<endl;}
        else {cout << aa << " " << bb <<endl;}
    }
  

  return 0;
}