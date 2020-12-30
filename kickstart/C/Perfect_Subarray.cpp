#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <stdio.h>
#include <vector>
#include <math.h>
using namespace std;
#define fori(i , a ,b) for (int  q = i ; q < a; q +=b )
#define vi vector<int>


int t;
int q;
bool isSqaure(int a ) {
    
    return (pow(a,0.5) == (int)pow(a,0.5));
}
int main() {
    cin >> t; 
    for (int mmm = 1 ; mmm <= t ; mmm++) {
        int n; 
        int sum = 0;
        vi nms;
        vi pre ;
        int ans =0;
        cin >> n;
        pre.push_back(0);
        for (int i = 0 ; i <  n ; i++) {
            cin >> q;
            nms.push_back(q);
            sum+= q;
            pre.push_back(sum);
            
        }
        for (int i = 0 ; i <= n ; i++) {
            for (int q = i+1 ; q <= n; q++) {
                //cout << "Q: " << pre[q] << " " << q << " I: " << pre[i] << " " << i << endl;
                if (isSqaure(pre[q]-pre[i])) {
                    ans++;
                }
            }
        }
        cout << "Case #" << mmm <<": " <<   ans << endl;
    }
    return 0;
}
 
