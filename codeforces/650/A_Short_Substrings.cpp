#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <stdio.h>
#include <vector>
#include <math.h>
using namespace std;
#define fori(i , a ,b) for (int  q = i ; q < a; q +=b )
#define vi vector<int>
#define ll long long
int main() {
  int t;
  cin >> t;
    while (t--) {
        string a;
        cin >> a;
        vector<char> b;
        for (int i = 0 ; i < a.size(); i++) {
            if (i % 2 == 0) {
                b.push_back(a[i]);
            }
        }
        b.push_back(a[a.size()-1]);
        for (int i = 0 ; i < b.size() ; i++) {
            cout << b[i];
        }
        cout << endl;
    }
  

  return 0;
}