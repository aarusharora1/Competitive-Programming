#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <stdio.h>
#include <vector>
#include <math.h>
#include <set>
using namespace std;
#define fori(i , a ,b) for (int  q = i ; q < a; q +=b )
#define vi vector<int>
typedef long long ll;
int main() {
  int t;
  cin >> t;
    while (t--) {
        int  n = 0 ; cin >> n;
        vector<char> a(n);
        vector<char> b(n);
        for (int i = 0 ; i < n ; i++) {
            cin >> a[i];
        }
        for (int i = 0 ; i < n ; i++) {
            cin >> b[i];
        }
        bool stop = false;
        for (int i = 0 ; i < n ; i++) {
            if (a[i] > b[i]) {cout << -1 << endl; stop=true;break;}
        }
        set<char> q,qq;
        if (stop) {continue;}
        for (int i = 0 ; i < n ; i++) {
            if (a[i] == b[i]){continue;}
            q.insert(a[i]);
            qq.insert(b[i]);
        }
        cout << max(qq.size(),q.size()) << endl;
    }
  

  return 0;
}