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
        int n = 0 , x  = 0 ;
        cin >> n >> x;
        vi prefix ( n + 1);
        vi nums;
        prefix[0] = 0;
        for (int i = 1 ; i <= n ; i++) {
            int q ; cin >> q ; prefix[i] = prefix[i-1] + q;
            nums.push_back(q);
        }
        if (prefix[n] % x != 0) {
            cout << n << endl;
        }
        else {
            //cout << "  HERE :  " << endl;
            int ans = -1;
            for (int  i = 0 ; i < n ; i ++) {
                if (nums[i]  % x != 0 || nums[n-i-1] % x != 0) {
                    ans =  n-i - 1 ; break;
                }
            }
            cout << ans << endl;

        }

    }
  

  return 0;
}