#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <stdio.h>
#include <vector>
#include <math.h>
using namespace std;
#define fori(i , a ,b) for (int  q = i ; q < a; q +=b )
#define vi vector<int>
int main() {
    int n =  0, m = 0 , t = 0;
    cin >> n >> m >> t;
    vector<vector<char>> nm;
    for (int i  = 0 ; i < n ; i++) {
        vector<char> mm ;
        char mmm;
        for (int ii  =0 ; ii < m ; ii++) {
            cin >> mmm;
            mm.push_back(mmm);
        }
        nm.push_back(mm);
    }
    
  

  return 0;
}