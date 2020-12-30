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
        vector<char> a (n);
        vector<char> b (n);
        for (int i = 0 ; i < n  ; i++) {
            cin >> a[i];
        }
        for (int i = 0 ; i < n ; i++) {
            cin >> b[i];
        }
        vector<int> ans ;
        for (int q = n-1 ; q >= 0 ; q --) {
                  //      cout << "A:"<< endl;for (auto i : a) {cout << i << " ";}cout << endl;

            if (a[q] == b[q]) {continue;}
            if (a[0] == b[q]) {
                ans.push_back(1);ans.push_back(q+1);
                if (a[0] == '0'){a[0]='1';}
                else {a[0]= '0';}
                reverse(a.begin(), a.begin()+q
                +1);
                for (int i = 0 ; i < q; i++) {if (a[i] == '0'){ a[i]='1';} else {a[i]='0';}}
            }
            else {
                ans.push_back(q+1);
                reverse(a.begin(), a.begin()+q+1);
                for (int i = 0 ; i < q; i++) {if (a[i] == '0'){ a[i]='1';} else {a[i]='0';}}
            }
        }
        cout << ans.size() << " ";
        for (auto i : ans) {cout << i << " ";} cout << endl;
    }
  

  return 0;
}