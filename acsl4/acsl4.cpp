#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <stdio.h>
#include <vector>
#include <math.h>
using namespace std;
#define fori(i , a ,b) for (int  q = i ; q < a; q +=b )
#define vi vector<int>

typedef long long ll;
vi opp;
vi pla;
vi x = {6,11,16,21,26,34,39,44,49};
vi y = {8,13,18,23,28,36,41,46,51};
bool occupied(int a) {
    if (a == 52) {return false;}
    bool ans = false;
    fori(0,3,1) {if (pla[q] == a || opp[q] == a) {ans = true;}}
    return ans;
}
bool isPrime(int a) {
    
    vi prime  = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53 };
    for (int q = 0 ; q < 15; q++ ) {
        if (a == prime[q]) {return true;}
    }
    return false; 
}
bool isSquare(int a) {
    if (a == 9 || a == 16 || a == 25 || a== 36 || a == 49 ) return true;
    return false;
}
bool horivert(int a, int b) {
    fori(0,9,1) {
        if (a <= x[q] && b >= y[q]) {return true;}
        
    }return false;
}


int main() {
    fori(0,5,1) {
        pla.clear();
        opp.clear();
        int in; 
        fori(0, 3, 1) {cin >> in; opp.push_back(in);}
        fori(0,3,1) {cin >> in; pla.push_back(in);}
        int r;
        cin >> r;
        vi moves;
        fori (0,r,1) {
            cin >> in; 
            sort(pla.begin(), pla.end());
            
            int mover = pla[0];
            //cout << "MOVER: " << mover << "ROLL: " << in <<  "NEW: " << mover+in << " " ;
            if (occupied(mover+in)) {
                continue;}
            
            if (mover+in > 52) {continue;} 
            if (mover+in == 52) {
                pla[0] = 52;
                sort(pla.begin(), pla.end());

                //cout << pla.size() << endl;              
                pla.pop_back();
                //cout << pla.size() << endl;
                
                
                
                continue;
            }
            //cout << "HERE1  ";
            if (isPrime(mover+in)) {
                int m = mover+in;
                while (m - (mover+in) <7) {
                    if (occupied(m)) {pla[0] = m-1;break;}
                    m++;
                }
                continue;
            }
            //cout << "HERE2  " ;
            if (isSquare(mover+in)) {
                int m = mover+in;
                while ((mover+in) - m > -7 ) {
                    if (occupied(m)) {pla[0] = m+1; break;}
                    m--;
                }
                continue;
            }
            //cout << "HERE3  " ;
            if (horivert(mover, mover+in)) {
                int q = mover+in;
                while( q > mover) {
                    if (q%in == 0 && !occupied(q)) {
                        break;
                    }
                    q--;
                }
                pla[0] = q;
                continue;
            }
            //cout << "HERE4  " ;
            pla[0] = mover+in;
            

            
        }
        sort(pla.begin(),pla.end());
        if (pla.size() == 0) { cout << "GAME OVER" << endl;}
        else {
            for (int i = 0 ; i < pla.size() ; i++ ) {
                cout << pla[i] << " ";
            }
            cout << endl;
        }
            
    }
    return 0;
}
 
