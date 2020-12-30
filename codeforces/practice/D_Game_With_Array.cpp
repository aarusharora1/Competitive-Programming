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
 
        int n = 0 , s = 0;
        cin >> n >> s;
        if (n == s) {cout << "NO" << endl; }
        else if (n == 1 ) {cout << "YES\n" << s <<endl<< s-1 << endl; }
        else if (s / n == 1) {cout << "NO" << endl;}
        else if ( n + 1 == s) {cout << "NO" << endl;}
        else {
            cout << "YES" << endl;
        int d =  s / n, sum = 0;
        vi ans; 
        for (int i = 0 ; i < n-1 ; i++) {
            ans.push_back(d) ; sum+= d;
        }
        ans.push_back(s-sum);
        for(auto i :ans) {cout << i << " " ;    }
    
        cout <<"\n"<< 1 << endl;
        }
  return 0;
}