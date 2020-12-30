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

        int n = 0 ; cin >> n;
        vector<pair<int,int>> a;
        for (int i  =0  ;  i <= n  ; i ++) {
            a.push_back(make_pair(i+1,i+1));
            a.push_back(make_pair(i,i+1));
            a.push_back(make_pair(i+1,i));
        }
        a.push_back(make_pair(0,0));
        cout << 4 + 3 * n << endl;
        for (int i = 0 ; i < a.size() ; i++) {
            cout << a[i].first << " " << a[i].second << endl;
        }
        
  

  return 0;
}