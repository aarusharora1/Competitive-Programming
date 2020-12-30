#include <bits/stdc++.h>
using namespace std;
int n;
vector<pair<int,int>> points(2501);


int main() {
   ios_base::sync_with_stdio(false); 
    cin.tie(NULL);   
    
    cin >> n;
    for (int i = 0 ; i < n ; i++) {
        int a, b;
        cin >> a >> b;
        points[i].first = a;
        points[i].second = b;
    }
    long long ans = 0;
    
  
  

  return 0;
}