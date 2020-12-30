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
        ll a  = 0 , b = 0 , c = 0;
        cin >> a >> b >> c;
        if (a < c && a * b < c) {cout << 1 << " " << -1 << endl;}
        else if (a * b == c) {cout << 1 << " " << -1<< endl;}
        else if (a < c) {cout << 1 << " " << b <<endl;}
        else { cout << -1 << " " << b<<endl;}
    }
  

  return 0;
}