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
        int x  = 0 , y = 0 , z = 0;
        cin >> x >> y >> z;
        if (x == y&&y == z) {
            cout << "YES\n" << x << " " << x << " " << x <<endl;
        }
        else if (x == y && x > z) {
            cout << "YES\n"<<x << " " << z << " " << z << endl;
        }
        else if (x == z && x > y) {
            cout << "YES\n"<< x << " " << y << " " << y << endl;
        }
        else if (z == y && z > x) {
            cout << "YES\n"<< x << " " << x << " " << z << endl;
        }
        else {cout << "NO\n";}
    }
  

  return 0;
}