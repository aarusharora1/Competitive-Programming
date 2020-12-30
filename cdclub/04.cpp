#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    vector<int> a(12,4); a[0]=0;a[1]=0;a[10]=16;
    
    int sum = 21;
    for (int i = 0 ; i <n ; i++) {
        int q; cin >>q; a[q]--; sum -=q;
    }
    if (sum > 11) {cout << "DRAW\n"; return 0;}
    int a1 = 0 , a2 = 0;
    for (int i = 0 ; i <= sum ; i++) {
        a1 += a[i];
    }
    for (int i = sum+1 ; i < 12 ; i++) {
        a2 += a[i];
    }
    if (a2 < a1) {cout << "DRAW\n";} else {cout << "STOP\n";}

  return 0;
}