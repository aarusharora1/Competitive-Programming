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
        int n = 0 ; cin >> n;
        vi a (n);
        bool active = false;
        int num =0;
        for (int i  = 0; i < n ; i++) {
            cin >> a[i]; 
            if (a[i] == i+1) {
                if (active) {active =false; num++;}
            }
            else {
                if (!active) {active=true;}
            }
            
        }
        if (num == 0) {cout << 0 <<endl;}
        else if (num == 1) {cout << 1 <<endl;}
        else {cout << 2 <<endl;}
    }
  

  return 0;
}