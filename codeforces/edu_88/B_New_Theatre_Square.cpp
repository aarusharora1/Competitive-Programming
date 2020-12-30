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
        int n,m,x,y;
        cin >> n >> m >> x >> y;
        int  ans=0;
        char s;
        if ( x * 2 <= y) {
            int nn;
            for (int i = 0 ; i <  n ;i ++ ){ 
                for (int i2 = 0 ; i2 <  m ; i2++) {
                    
                    cin >> s;
                    if (s=='.') {ans+=x;}
                }
            }
        }
        else {
            
            for (int i = 0; i <  n ; i++) {char last = '*';
                for (int i2  = 0 ; i2 < m ; i2++) {
                    cin >> s;
                    if (last == '.' && s=='.') {
                        ans += (y-x);
                    }
                    else if (s=='.') {
                        ans += x;
                    }
                    last = s;
                }
            }
        }
        cout << ans << endl;
    }
  

  return 0;
}