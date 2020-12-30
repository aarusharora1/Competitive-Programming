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
        int n = 0 ; cin >> n ;
        vector<bool> seen (n+1);
        int q = 0;
        for (int i = 0 ; i < 2 *n ; i++) {
            cin >>q; if (seen[q]) {continue;}
            else {
                seen[q]=true; cout << q << " ";
            }
        }
        cout << endl;
    }
  

  return 0;
}