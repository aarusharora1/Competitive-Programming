//https://codeforces.com/contest/1343/problem/B
#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <stdio.h>
#include <vector>
using namespace std;
#define fori(i , a ,b) for (int  q = i ; q < a; q +=b )
#define vi vector<int>
typedef long long ll;
int t;
ll m;
int main() {
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
       
        ll sum = 0;
        ll current_max = 0;
       
        for (int i  = 0 ; i < n ; i++){
            cin >> m;
            //cout << current_max << "<max " << sum << "<sum ";
            if (current_max >= 0 && m < 0) {sum += current_max; current_max = m;}
            if (current_max <= 0 && m > 0) {sum += current_max; current_max = m;}
            if (current_max >= 0 && m > current_max) {current_max =m;}
            if (current_max <= 0 && m > current_max) {current_max = m;}

        }
        sum += current_max;
        cout <<"" <<  sum << "\n";
        
    }
    return 0;
}
 
