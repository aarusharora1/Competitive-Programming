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
        int n = 0 ; 
        cin >> n;
        vi a (n);
        for (int i = 0 ; i< n ; i++) {cin >> a[i];}
        int i = 0 ;
        while (i < n && a[i] == 1) {i++;}
        //cout << " I : " << i;
        if (n == i) {
            if (n % 2 ==1) {cout << "First\n";}
            else {cout << "Second\n";}
            continue;
        }
        if (i % 2 ==0) {cout << "First\n";}
        else {cout << "Second\n";}
    }
  

  return 0;
}