#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <stdio.h>
#include <vector>
#include <math.h>
using namespace std;
#define fori(i , a ,b) for (int  q = i ; q < a; q +=b )
#define vi vector<int>
int main() {
  int test;
  cin >> test;

  for (int tt = 0; tt < test; tt++) {
    int h, w, a, b;
    cin >> h >> w >> a >> b;

    if (h * a != w * b) {
      cout << "NO" << endl;
      continue;
    }

    vector<vector<int>> result(h, vector<int>(w, 0));

    int shift = 0;

    for (shift = 1; shift < w; shift++) {
      if (shift * h % w == 0) {
        break;
      }
    }

    for (int i = 0, dx = 0; i < h; i++, dx += shift) {
      for (int j = 0; j < a; j++) {
        result[i][(j + dx) % w] = 1;
      }
    }

    cout << "YES" << endl;

    for (int i = 0; i < h; i++) {
      for (int j = 0; j < w; j++) {
        cout << result[i][j];
      }

      cout << endl;
    }
  }

  return 0;
}