#include <bits/stdc++.h>
using namespace std;


int main() {
  int n ;
    cin >>n;
    vector<int> s (1000000009);
    long long maxb = 0;
    for (int i = 0 ; i < n ; i++) {
        long long a, b;
        cin >> a >>b;
        s[a]++;s[b]--;
        maxb=max(maxb,b);
    }
    for (long long i = 1; i < maxb+3;i ++) {
        s[i] += s[i-1];
    }
    long long maxi = 0, maxx = 0;
    for (long long w = 0 ;w < maxb+2; w++) {
        if (s[w]>maxx) {maxx=s[w];maxi=w;}
    }
    cout << maxi << " " << maxx << "\n";
}  
 