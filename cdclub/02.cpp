#include <bits/stdc++.h>
using namespace std;
#define fori(i , a ,b) for (int  q = i ; q < a; q +=b )
#define vi vector<int>
typedef long long ll;

int main() {
    int n = 0;
    cin >> n;
    vi a(6); //1 2 , 1 3, 2 1, 2 3, 3 1 , 3 2
    for (int i = 0 ; i  < n ; i++) {
        int aa, b;
        cin >> aa >>b;
        if (aa==1) {if (b==2) {a[0]++;}if(b==3){a[1]++;}}
        if (aa==2) {if (b==1) {a[2]++;}if(b==3){a[3]++;}}
        if (aa==3) {if (b==1) {a[4]++;}if(b==2){a[5]++;}}
    }
   // for (auto i : a) {cout << i << " ";}cout<<"\n";
    cout << max (a[0]+a[3]+a[4], a[1]+a[2]+a[5]) << "\n";
  

  return 0;
}