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
  int t;
  cin >> t;
    while (t--) {
        int n,q;
        cin >> n;
        vi nums; 
        int e=0,o=0;
        for (int i = 0 ; i < n ; i ++) {
            cin >>q ;nums.push_back(q);
            if (q % 2==0){e++;}else{o++;}
        }
        string out="NO";
        //cout << " E: " << e << " O : " << o << endl;
        if (e%2==0 && o%2==0){out = "YES";}
        sort(nums.begin(),nums.end());

        for (int i  = 0 ; i < n-1; i++) {
           // cout << " I: " << nums[i] << " I+1 : " << nums[i+1]  << endl;
            if (nums[i+1] - nums[i] == 1) {out= "YES"; break;}

        }
        cout << out << endl;
        
        
    }
  

  return 0;
}