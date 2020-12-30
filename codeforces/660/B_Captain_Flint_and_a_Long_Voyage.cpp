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
        cin >> n ;
        if (n==1) {cout << 8<<"\n";continue;}
        int q =(n- ((n-1) /4)) -1;
        for (int i = 0 ; i < q ; i++) {
            cout << 9 ;
        }
        for (int i =q ; i < n ; i++) {
            cout << 8;
        }
        cout << "\n";
    }
  

  return 0;
}