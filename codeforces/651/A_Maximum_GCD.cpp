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
        int n = 0;
        cin >> n;
        if (n % 2 == 0) {
            cout << n/2 << endl;
        }
        else {
            cout << (n-1) /2 << endl;
        }
    }
  

  return 0;
}