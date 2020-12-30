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
        int l = 0 , r = 0;
        cin >> l >> r;
        if (r / l >= 2) {
            if (r  % 2 ==0) {
            cout << r/2 << " " << r <<endl;}
            else {
                cout << r/2 << " " << r-1 << endl;
            }
            continue;
        }
        cout << -1 << " " << -1 << endl;


    }
  

  return 0;
}