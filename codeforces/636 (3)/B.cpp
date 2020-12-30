//https://codeforces.com/contest/1343/problem/B
#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <stdio.h>
#include <vector>
using namespace std;
#define fori(i , a ,b) for (int  q = i ; q < a; q +=b )
#define vi vector<int>
bool compare(int a , int b) {
    if (a%2 == 0 && b%2 == 1 ) {return true;}
    if (a%2 == 1 && b %2  == 0) {return false;}
    return a < b;
}

int t;
int main() {
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n % 4) {cout << "NO\n"; }
        else {
            cout << "YES\n" ;
            vi ans;
            
            fori(1, n/2 +1, 1) {
                ans.push_back(q);
                ans.push_back(q + n - 1);
            }
           
            sort(ans.begin() , ans.end(),compare);  
            for ( auto i = ans.begin() ; i < ans.end() ; i++) {
                cout << *i  << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}
 
