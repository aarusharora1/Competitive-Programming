#include <bits/stdc++.h>
using namespace std;
#define fori(i , a ,b) for (int  q = i ; q < a; q +=b )
#define vi vector<int>
typedef long long ll;
const int maxc = 1e9;
int getmex(vi a, int start, int end) {
    set<int> b;
    for (int i = start; i < end; i++) {
      b.insert(a[i]);
    }
    //sort(b.begin(),b.end());
    int ans = 0;
    int i = 0;
    for (auto ii : b) {
      if (i != ii) {break;}
      i++;
    }
    
    return i;
}

int main() {
  int t = 0;
  cin >> t;
  while (t--) {
      int n = 0;
      cin >> n;
      vi a(n);
      //taking input
      vi count(101);
      for (int i = 0 ; i< n ; i++) {
          cin >> a[i];
          count[a[i]]++;
      }
       int ans=0;
      	for (int q=0;count[q]>=2;q++,ans++);
	      for (int q=0;count[q]>=1;q++,ans++);
      	cout<<ans<<endl;
       
      
  }
  
  

  return 0;
}