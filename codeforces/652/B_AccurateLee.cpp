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
        int n = 0 ; string s;
        cin >> n >> s;
        int fo =-1, lz=-1 ;
        for (int i = 0 ; i < n ; i++) {
            if (s[i] == '1') {fo=i;break;}
        }
        for (int i = n-1; i >= 0 ; i--) {
            if (s[i] == '0') {lz = i; break;}
        }
        if (fo == -1 || lz == -1) {cout << s <<endl;continue;}
        if (n == 1) {cout << s[0] << endl;continue;}
        for (int i = 0  ; i < n ; i++) {
            if (i < fo || i > lz) {
                cout << s[i];
            }
            else if (i == fo) {cout << '0';}
            
        }
        cout<<endl;
    }
  

  return 0;
}