#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <stdio.h>
#include <vector>
#include <math.h>
using namespace std;
#define fori(i , a ,b) for (int  q = i ; q < a; q +=b )
#define vi vector<int>

bool good(int a ) {
    int sum = 0;
    while (a >= 10) {
        //cout << " A: " << a <<  "    A >  "  << (a > 10) << endl;
        sum += a%10;a/=10;
    }
    sum += a;
    //cout << " SUM :  " << sum << endl;
    return sum%4==0;
}
int main() {
  int n = 0 ;
  cin >> n ;
  while (!good(n)) {
      n++;
  }
  cout << n << endl;

  return 0;
}