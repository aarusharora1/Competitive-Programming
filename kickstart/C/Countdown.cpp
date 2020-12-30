//https://codeforces.com/contest/1343/problem/B
#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <stdio.h>
#include <vector>
using namespace std;
#define fori(i , a ,b) for (int  q = i ; q < a; q +=b )
#define vi vector<int>


int t;
int q;
int q2;
int main() {
    cin >> t; int o ; o  = t;
    while (t--) {
        int n; int k;
        cin >> n >> k;
        int ans = 0 ; 
        vi nums;
        for (int i = 0 ; i  < n ; i ++) {
            
            cin >> q;
            if (q == k) {
                int count = 0;
                for (int ii = k-1 ; ii >= 1 ; ii--) {
                    cin >> q2;
                    if (q2 == ii) {count++;}i++;
                }
                if (count== q-1 ) {ans++;}
            }
            

        }
        cout << "Case #" << (o-t) << ": " << ans << endl;
    }
    return 0;
}
 
