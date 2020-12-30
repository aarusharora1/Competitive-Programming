#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <stdio.h>
#include <vector>
#include <math.h>
using namespace std;
#define fori(i , a ,b) for (long long  q = i ; q < a; q +=b )
#define vi vector<int>
typedef long long ll;
int main() {
  int t;
  cin >> t;
    while (t--) {
        ll n , k;
        cin >> n >> k;
        vector<ll> a(n);
        fori(0,n,1) {cin >> a[q];}
        sort(a.begin(),a.end());
        vi w(k);vector<vector<ll>> ans (k);
        
        fori(0,k,1) {
            cin >> w[q]; 
            
        }
        sort(w.begin(),w.end());
        for (int q = 0 ; q < k ; q++) {
            if (w[q] == 1) {ans[q].push_back(a[a.size()-1]); a.pop_back();w[q]=0;}
            if (w[q] == 2) {
                ans[q].push_back(a[a.size()-1]);
                ans[q].push_back(a[a.size()-2]);
                 a.pop_back();a.pop_back();w[q]=0;}
        }
    //    cout << " A: " << endl; for (auto i : a ) {cout << i << " " ; }cout <<endl;
    //    cout << " W: " << endl; for (auto i : w ) {cout << i << " " ; }cout <<endl;
  //      cout <<  " ANS: " << endl; for (auto i : ans) {for (auto j : i) {cout << j << " ";}cout<<endl;}
        for (int i = 0 ; i < k ; i++) {
            if (w[i] > 1) {
                ans[i].push_back(a[a.size()-1]); a.pop_back(); w[i]--;
            }
        }
   //     cout << " A: " << endl; for (auto i : a ) {cout << i << " " ; }cout <<endl;
   //     cout << " W: " << endl; for (auto i : w ) {cout << i << " " ; }cout <<endl;
    //    cout <<  " ANS: " << endl; for (auto i : ans) {for (auto j : i) {cout << j << " ";}cout<<endl;}
        while (a.size() > 0 ) {
            for (int i = 0 ; i < k ; i++) {
                    if (w[i] < 1) {continue;}
                if (w[i] == 1) {
                    ans[i].push_back(a[a.size()-1]); a.pop_back(); w[i]--;
                }
                else {
                    ans[i].push_back(a[0]);a.erase(a.begin());w[i]--;
                }
            }
        }
     //   cout << " A: " << endl; for (auto i : a ) {cout << i << " " ; }cout <<endl;
     ///  cout << " W: " << endl; for (auto i : w ) {cout << i << " " ; }cout <<endl;
     //  cout <<  " ANS: " << endl; for (auto i : ans) {for (auto j : i) {cout << j << " ";}cout<<endl;}
        ll aaa = 0;
        for (ll i = 0 ; i < k ; i++) {
            ll mi = ans[i][0] , ma = ans[i][0];
            for (ll j = 0 ; j  < ans[i].size(); j++) {
                ma = max(ans[i][j], ma);
                mi = min(ans[i][j] , mi);
            }
          //  cout << " MAX: " << ma <<"  MIN : " << mi << endl;
            aaa+= (ma + mi);
        }
        cout << aaa << endl;

        

    }
  

  return 0;
}