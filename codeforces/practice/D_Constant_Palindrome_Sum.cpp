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
        int n = 0 , k = 0;
        cin >> n >> k;
        vi num;
        vi w; w.resize(2*1e5+1); 
        for (int i = 0 ; i < n ; i++) {
        	int q; cin >> q; num.push_back(q);
        	if ( i > (n /2)  -1 )  { 
				w[q + num[n-i-1]] ++;
            }
        }
		//for (auto i : w) {cout <<  i << " ";}
		int maxn = 0 ;
		int maxi = 0;
		for (int i = 0 ; i< k+2 ;i++) {
			if (w[i] > maxn) {
				maxi = i; maxn = w[i];
			}
		}
		if (maxi < k + 1 && maxn == 1) {
			maxi = k+1 ;
		}
		//cout << "  MAX I :  " << maxi << "    MAX N  :  "  << maxn  << endl;
		if (maxn ==n ) {cout << 0 << endl; continue;}
		int ans = 0 ;
		for (int i = 0 ; i < n/2 ; i++) {
			if (maxi != num[i] + num[n-i-1]) { ans++;}
			//cout << "   P  "  <<  num[i] <<  "  FFKSF " <<  num[n-i-1];
		}
		cout << ans << endl;
        
    }
  

  return 0;
}