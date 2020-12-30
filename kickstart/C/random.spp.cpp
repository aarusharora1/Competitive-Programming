#include <bits/stdc++.h>

using namespace std;



int main()
{
  int y = 2020;
  int s ;int n;
  int f;
  for (int i = 1; i <= 2020; i++) {
    if (y%i==0) {
      s = s + i;
      n ++;
    }
    if (s > 2020 && f==0) {
      cout << n-1;
      f=1;
    }
  }   
    return 0;
}
