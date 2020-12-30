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
        int n;
        cin >> n;
        vi num(n);
        for (int i = 0; i < n; i++) {
            cin >> num[i];
        }
        sort(num.begin(), num.end());
        int ans = 0, cur = 0;
        for (int i = 0; i < n; i++) {
            if (++cur == num[i]) {
                ans++;
                cur = 0;
            }
        }
        cout << ans << endl;
    }
  

  return 0;
}   