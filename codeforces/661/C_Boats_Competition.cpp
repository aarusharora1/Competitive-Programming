#include <bits/stdc++.h>
using namespace std;
#define fori(i , a ,b) for (int  q = i ; q < a; q +=b )
#define vi vector<int>
typedef long long ll;
int n = 1e7;
vi a (1e7);
int num(int ii, vi f) {
    int ans = 0;
    
    for (int i = 0 ; i< n ;i++) {
        
        //for (auto i : f) {cout << i << " " ;}
        //cout << "\n";
        //cout << " a[i" << a[i]<< " ii : " << ii << " f[i] " << f[i]  << " f [ii-a] " << f[ii-a[i]]<< " ANS : " << ans <<"\n";
            if(a[i] > ii) {continue;}
            if (ii - a[i] > n) {continue;}
        if (a[i] * 2 == ii && f[a[i]] <2) {continue;}
            if (f[a[i]] ==0) {continue;}
        if (f[ii-a[i]] > 0) {f[ii-a[i]]--;f[a[i]]--;ans++;}
    }
    //cout << " HERE2 "<<ans<<"\n";
    return ans;
}




int main() {
  int t;
  cin >> t;
    while (t--) {
        n=0;
        cin >> n ;
        
        vi freq(n*n+n);
        for (int i = 0 ; i <  n * n ; i ++) {
            freq[i] = 0;
        }
        for (int i = 0 ; i < n ;i++) {
            cin >>a[i]; freq[a[i]]++;
        }
        int ma =0;
        //if (n ==1) {cout << 0 << "\n";continue;}
         //   if (n < 4) {cout << 1 << "\n";continue;}
        for (int i = 0 ; i <= 2 *n ;i++) {
            vector<int> ff = freq;
            
            int thi = num(i, ff);
            //cout << "HERE3 " << thi << "\n";      
            ma = max(ma , thi);
        }
        cout << ma <<"\n";
    }
  

  return 0;
}   