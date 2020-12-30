#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <stdio.h>
#include <vector>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;
#define fori(i , a ,b) for (int  q = i ; q < a; q +=b )
#define vi vector<int>
int main() {

        int n = 0 ;
        cin >> n;
        vi a (n + 1);
        vi b;
        queue <int> s;int max = 0;
        for (int i = 0 ; i < n ; i ++) {
            cin >> a[i]; if (a[i]>max) {max=a[i];}

        }
        
        for (int i = 1 ; i < n ; i++) {
            if (a[i]-a[i-1]>1) {
                for (int q = a[i-1] +1 ; q < a[i] ; q++){
                    s.push(q);
                }
                
                }
            if (a[i] - i  > 2) {cout << -1 << endl;  return 0;}
        }
        
        if (a[0] == 0) {if (s.empty()) {b.push_back(max+1);}else{
                b.push_back(s.front()); s.pop();}}
        if (a[0] == 1) {b.push_back(0);}
        for (int i = 1 ; i < n ; i ++) {
            if (a[i] == 0) {
                if (s.empty()) {b.push_back(max+1);}else{
                b.push_back(s.front()); s.pop();}
            }
            else if (a[i] == a[i-1]) {
                if (s.empty()) {b.push_back(max+1);}
                else {
                b.push_back(s.front()   ); s.pop();}
            }
            else {b.push_back(a[i-1]);}
        }
        for (auto i: b) {cout << i << " ";}
        
    
  

  return 0;
}