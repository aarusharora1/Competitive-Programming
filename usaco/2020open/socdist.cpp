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
#define vpi vector<pair<ll,ll>>
#define INF 2000000000
vpi intervals;
int n;
int m;
bool works(ll a) {
    ll prev = -1LL * INF * INF;
    
    int cnt = 0;
    for (auto& i : intervals) {
        while (max(prev + a, i.first) <= i.second) {
            prev = max(prev + a, i.first);
            cnt++;
            if (cnt >= n) break;
        }
        if (cnt >= n) break;
    }
 
    return (cnt >= n);
}

int main() {
    
    cin >> n >> m;
    intervals.resize(m);
    fori(0, m,1) { cin >> intervals[q].first >> intervals[q].second; }
    sort(intervals.begin(), intervals.end()) ;
    ll low = 0;
    ll high = m;
    ll ans;
    while (low <= high) {
        ll mid = (low + high) / 2;
 
        if (works(mid)) {
            ans = mid;
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    cout << ans << endl;
    return 0;
}
 
