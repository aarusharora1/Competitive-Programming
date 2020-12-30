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
        int n  = 0 ;
        cin >> n ;
        vi a(n);
        int maxi = 0, max  = -1;

        for (int i = 0 ; i < n ; i++) {cin >> a[i];if (a[i]>max){maxi=i;max=a[i];} }
        if (max == 0) {
            for (int i = 0 ; i <= n ; i++) {
                if (i % 2 == 0 ) {cout << 'a' <<endl;}
                else {cout << 'b' << endl;}
            }
            continue;  
        }
        vector<string> ans ;
        //ans.push_back(string(a[0] , 'a'));
        ans.push_back(string(max,'a'));
        for (int i = 1 ; i < n ; i++)  {
            string last = ans[i-1];
            string q = "";
            for (int s = 0 ; s < a[i] ; s++) {
                q+=last[s];
            }
            for (int s = a[i]; s < max ; s++) {
                if (last[s] == 'z') {q+=--last[s];}
                else {q+=++last[s];}
            }
            ans.push_back(q);
        }
        if (a[0] == 0) {cout << "z";}
        for (int i = 0 ; i < a[0] ; i++) {
            cout << ans[0][i];
        }cout << endl;
        for (auto i: ans) {
            cout << i << endl;
        }

    }
  

  return 0;
}