#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <stdio.h>
#include <vector>
using namespace std;
#define fori(i , a ,b) for (int  q = i ; q < a; q +=b )
#define vi vector<int>

typedef long long ll;

ll sum = 0;
ll n = 0;
ll maxc (vector<ll> a) {
    
    vector<ll> q;
    //cout << "\nVECTOR: ";
    //cout.flush();
    for (ll i = 0; i < a.size(); ++i) {
        //cout << a[i] << " ";
        q.push_back(a[i]);
    }
    //cout << "HREER" <<endl;
    //cout.flush();
    sort(q.begin(),q.end());

    for (ll i  = 1 ; i < 1e9; i++) {
        //cout << "I: " << i<< " ";
        
        if (find(q.begin(), q.end(), i) == q.end()) { sum+= i;return i;}
    }
    return 0;

}
void printSubsequences(vector<ll> arr, int index,  
                       vector<ll> subarr) {
    if (index == arr.size()) { 
        int l = subarr.size(); 
        // Condition to avoid printing 
        // empty subsequence 
        if (l != 0) 
            maxc(subarr); 
    } 
    else{ 
        printSubsequences(arr, index + 1, subarr); 
        subarr.push_back(arr[index]); 
        printSubsequences(arr, index + 1, subarr); 
    } 
    return ; 
} 

int t;
int main() {
    cin >> t;
    while (t--) {
        sum = 0;
        cout.flush();
        cin >> n;
        vector<ll> arr;
        ll a;
        fori(0,n,1) {cin >> a;arr.push_back(a);} 
        
        vector<ll> sub;
        printSubsequences(arr, 0, sub );
 
        cout <<sum +1<< "\n";
    }
    return 0;
}
 
