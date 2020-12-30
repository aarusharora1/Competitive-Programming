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
  int t;
  cin >> t;
    while (t--) {
        int n  = 0  , m = 0; cin >> n >> m; char p;
        vector<vector<char>> q;
        for (int i  = 0 ; i < n ; i++) {
            vector<char> qq;
            for (int ii = 0 ; ii < m; ii ++) {
                cin >> p; qq.push_back(p);
            }
            q.push_back(qq);
        }
        bool good = true;
        for (int i = 1 ; i < n-1; i++) {
            for (int g = 1; g < m-1 ; g++) {
                cout << "   FFKFK     "  << q[i][g] << endl;
                if ( (q[i][g] == 'G' && q[i][g-1] == 'B') || (q[i][g] == 'G' && q[i-1][g]=='B')) {
                    good = false;
                }
            }
        }
        cout << good << endl;
    }
  

  return 0;
}