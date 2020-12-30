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
        if (n <= 30) {cout << "NO\n";continue;}
        if (n-30 == 6) {cout << "YES\n5 6 10 15\n";continue;}
        if (n-30 == 14) {cout << "YES\n6 7 10 21\n";continue;}
        if (n-30 == 10) {cout <<"YES\n5 14 6 15\n";continue;}
        cout << "YES\n"<<6 << " " << 10 << " " << 14 << " " << n-30 << "\n";
    }
  

  return 0;
}